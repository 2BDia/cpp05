/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:57:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/27 17:03:10 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrGrade(void)
{
	if (this->_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void	Bureaucrat::decrGrade(void)
{
	if (this->_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}
