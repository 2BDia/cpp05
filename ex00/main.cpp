/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:39:33 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/28 14:20:38 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	juliette("Juliette", 1);
	Bureaucrat	james("James", 150);

	try
	{
		std::cout << juliette << std::endl;
		juliette.decrGrade();
		std::cout << juliette << std::endl;
		std::cout << james << std::endl;
		james.incrGrade();
		std::cout << james << std::endl;
		juliette.incrGrade();
		juliette.incrGrade();
		// james.decrGrade();
		// james.decrGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Bureaucrat	oops("Oops", 9000);
		// Bureaucrat	oopsie("Oopsie", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
