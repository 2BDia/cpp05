/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:39:33 by rvan-aud          #+#    #+#             */
/*   Updated: 2022/01/10 13:01:51 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		// Form	wrongF("WrongF", 56, 159);
		// Form	wrong_F("Wrong_F", -8, 95);
		Form	lowForm("lowForm", 20, 20);
		Form	highForm("highForm", 19, 80);
		Bureaucrat	juliette("Juliette", 20);

		std::cout << juliette << std::endl;
		std::cout << lowForm << std::endl;
		juliette.signForm(lowForm);
		juliette.signForm(lowForm);

		std::cout << std::endl;
		std::cout << juliette << std::endl;
		std::cout << highForm << std::endl;
		juliette.signForm(highForm);
		juliette.incrGrade();
		std::cout << juliette << std::endl;
		juliette.signForm(highForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
