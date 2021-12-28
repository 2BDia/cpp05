/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:52:21 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/28 16:45:01 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:

		Form(void);
		Form(std::string name, int toSign, int toExec);
		Form(std::string name, std::string target, int toSign, int toExec);
		Form(Form const &src);
		~Form(void);

		Form	&operator=(Form const &rhs);

		std::string const	getName() const;
		std::string const	getTarget() const;
		bool				getSigned() const;
		int					getToSign() const;
		int					getToExec() const;

		void	beSigned(Bureaucrat const &signing);
		void	execute(Bureaucrat const &executor) const;
		virtual void	action(Bureaucrat const &executor) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("(Form) Grade too high!");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("(Form) Grade too low!");
				}
		};

		class	AlreadySignedException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("Form is already signed!");
				}
		};

		class	NotSignedException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("Form is not signed yet!");
				}
		};

	private:

		std::string const	_name;
		std::string const	_target;
		bool				_signed;
		int const			_toSign;
		int const			_toExec;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);
