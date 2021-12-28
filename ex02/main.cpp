/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:39:33 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/28 17:09:20 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	john("John", 137);
	Bureaucrat	james("James", 45);
	Bureaucrat	juliette("Juliette", 5);

	ShrubberyCreationForm	shrubbery("shrub_target");
	RobotomyRequestForm		robotomy("robot_target");
	PresidentialPardonForm	presidential("presid_target");

	srand((unsigned int)time(NULL)); //needed for the 50/50 in Robotomy

	std::cout << "--- Shrubbery tests ---" << std::endl;
	john.executeForm(shrubbery);
	std::cout << std::endl;
	john.signForm(shrubbery);
	james.signForm(shrubbery);
	juliette.signForm(shrubbery);
	std::cout << std::endl;
	john.executeForm(shrubbery);
	james.executeForm(shrubbery);
	juliette.executeForm(shrubbery);

	std::cout << std::endl << "--- Robotomy tests ---" << std::endl;
	john.executeForm(robotomy);
	std::cout << std::endl;
	john.signForm(robotomy);
	james.signForm(robotomy);
	juliette.signForm(robotomy);
	std::cout << std::endl;
	john.executeForm(robotomy);
	james.executeForm(robotomy);
	juliette.executeForm(robotomy);

	std::cout << std::endl << "--- Presidential tests ---" << std::endl;
	john.executeForm(presidential);
	std::cout << std::endl;
	john.signForm(presidential);
	james.signForm(presidential);
	juliette.signForm(presidential);
	std::cout << std::endl;
	john.executeForm(presidential);
	james.executeForm(presidential);
	juliette.executeForm(presidential);

	return (0);
}
