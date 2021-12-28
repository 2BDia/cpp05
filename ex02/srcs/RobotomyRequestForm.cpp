/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:22:31 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/28 17:08:37 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy", "Default", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->Form::operator=(rhs);
	return (*this);
}

void	RobotomyRequestForm::action(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::cout << "* Drill noises *" << std::endl;
	if ((rand() % 2) == 1)
		std::cout << this->getTarget() << " has been rotomized successfully!" << std::endl;
	else
		std::cout << "Robotomy failed :/" << std::endl;
}
