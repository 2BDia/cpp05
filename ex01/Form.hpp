/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:52:21 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/27 17:16:53 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Form
{
	public:

		Form(void);
		Form(std::string name, int toSign, int toExec);
		Form(Form const &src);
		~Form(void);

		Form	&operator=(Form const &rhs);

		std::string const	getName() const;
		bool				getSigned() const;
		int					getToSign() const;
		int					getToExec() const;

		class	GradeTooHighException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("Form grade too high!");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("Form grade too low!");
				}
		};

	private:

		std::string const	_name;
		bool				_signed;
		int const			_toSign;
		int const			_toExec;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);
