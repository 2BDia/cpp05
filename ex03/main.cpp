/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:39:33 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/30 15:17:45 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		someRandomIntern;
	Form*		rrf;
	Bureaucrat	juliette("Juliette", 1);
	Bureaucrat	james("James", 150);

	std::cout << "--- Shrubbery tests ---" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	james.signForm(*rrf);
	juliette.signForm(*rrf);
	std::cout << std::endl;
	james.executeForm(*rrf);
	juliette.executeForm(*rrf);
	delete rrf;

	std::cout << std::endl << "--- Robotomy tests ---" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	james.signForm(*rrf);
	juliette.signForm(*rrf);
	std::cout << std::endl;
	james.executeForm(*rrf);
	juliette.executeForm(*rrf);
	delete rrf;

	std::cout << std::endl << "--- Presidential tests ---" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	james.signForm(*rrf);
	juliette.signForm(*rrf);
	std::cout << std::endl;
	james.executeForm(*rrf);
	juliette.executeForm(*rrf);
	delete rrf;

	std::cout << std::endl << "--- Other test ---" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("other test", "Bender");	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
