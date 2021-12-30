/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 14:11:12 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/30 14:24:28 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class	Intern
{
	public:

		Intern(void);
		~Intern(void);

		Form	*makeForm(std::string formName, std::string target);

		class	NoNameMatchException : public std::exception
		{
			public:

				const char	*what() const throw()
				{
					return ("Not a valid form name");
				}
		};
};
