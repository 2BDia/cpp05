/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:52:17 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/28 16:51:31 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _target("Default"), _signed(false), _toSign(150), _toExec(150)
{
}

Form::Form(std::string name, int toSign, int toExec) : _name(name), _signed(false), _toSign(toSign), _toExec(toExec)
{
	if (toSign < 1 || toExec < 1)
		throw (Form::GradeTooHighException());
	else if (toSign > 150 || toExec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(std::string name, std::string target, int toSign, int toExec) : _name(name), _target(target), _signed(false), _toSign(toSign), _toExec(toExec)
{
	if (toSign < 1 || toExec < 1)
		throw (Form::GradeTooHighException());
	else if (toSign > 150 || toExec > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &src) : _toSign(src._toSign), _toExec(src._toExec)
{
	*this = src;
}

Form::~Form(void)
{
}

Form	&Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::string const	Form::getName(void) const
{
	return (this->_name);
}

std::string const	Form::getTarget(void) const
{
	return (this->_target);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getToSign(void) const
{
	return (this->_toSign);
}

int	Form::getToExec(void) const
{
	return (this->_toExec);
}

void	Form::beSigned(Bureaucrat const &signing)
{
	if (!this->_signed)
	{
		if (this->_toSign >= signing.getGrade())
			this->_signed = true;
		else
			throw (Form::GradeTooLowException());
	}
	else
		throw (Form::AlreadySignedException());
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (!this->_signed)
		throw (Form::NotSignedException());
	else if (executor.getGrade() > this->_toExec)
		throw (Form::GradeTooLowException());
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << " is " << (rhs.getSigned() ? "signed" : "not signed")
		<< ", required rank to sign : " << rhs.getToSign()
		<< ", rank to execute : " << rhs.getToExec();
	return (o);
}
