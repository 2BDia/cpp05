/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:20:36 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/28 16:44:24 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Shrubbery", "Default", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->Form::operator=(rhs);
	return (*this);
}

void	ShrubberyCreationForm::action(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::ofstream	ofs(this->getTarget() + "_shrubbery");
	if (ofs.good())
	{
		ofs << "     ccee88oo                 ccee88oo" << std::endl;
		ofs << "  C8O8O8Q8PoOb o8oo        C8O8O8Q8PoOb o8oo" << std::endl;
		ofs << " dOB69QO8PdUOpugoO9bD     dOB69QO8PdUOpugoO9bD" << std::endl;
		ofs << "CgggbU8OU qOp qOdoUOdcb  CgggbU8OU qOp qOdoUOdcb" << std::endl;
		ofs << "    6OuU  /p u gcoUodpP      6OuU  /p u gcoUodpP" << std::endl;
		ofs << "      \\\\\\//  /douUP            \\\\\\//  /douUP" << std::endl;
		ofs << "        \\\\////                   \\\\////" << std::endl;
		ofs << "         |||/\\                    |||/\\" << std::endl;
		ofs << "         |||\\/                    |||\\/" << std::endl;
		ofs << "         |||||                    |||||" << std::endl;
		ofs << "   .....//||||\\..................//||||\\...." << std::endl;
	}
	else
		throw (ShrubberyCreationForm::FileOpeningException());
}
