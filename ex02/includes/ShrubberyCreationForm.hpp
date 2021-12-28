/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:06:10 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/28 16:44:13 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public :

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

		void	action(Bureaucrat const &executor) const;

		class	FileOpeningException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("Error opening file");
				}
		};
};
