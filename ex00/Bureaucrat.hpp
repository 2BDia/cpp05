/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 13:54:57 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/27 16:07:18 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

class	Bureaucrat
{
	public:

		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &rhs);

		std::string const	getName() const;
		int					getGrade() const;

		void	incrGrade();
		void	decrGrade();

		class	GradeTooHighException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("Grade too high!");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("Grade too low!");
				}
		};

	private:

		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);
