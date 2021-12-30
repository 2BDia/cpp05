/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:16:54 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/30 14:47:57 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Form	*Intern::makeForm(std::string formName, std::string target)
{
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int			i;

	for (i = 0; i < 3; i++)
	{
		if (formName == forms[i])
			break;
	}
	if (i == 3)
		throw (Intern::NoNameMatchException());

	Form	*tmp = NULL;
	switch (i)
	{
		case (0):
			tmp = new ShrubberyCreationForm(target);
			break;
		case (1):
			tmp = new RobotomyRequestForm(target);
			break;
		case (2):
			tmp = new PresidentialPardonForm(target);
	}
	std::cout << "Intern creates " << formName << std::endl;
	return (tmp);
}
