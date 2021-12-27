/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:39:33 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/27 15:49:18 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	juliette("Juliette", 1);
	Bureaucrat	james("James", 150);

	try
	{
		std::cout << juliette;
		juliette.decrGrade();
		std::cout << juliette;
		std::cout << james;
		james.incrGrade();
		std::cout << james;
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
