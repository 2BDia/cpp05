# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/23 16:42:22 by rvan-aud          #+#    #+#              #
#    Updated: 2021/12/30 14:35:23 by rvan-aud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp						\
				srcs/Bureaucrat.cpp				\
				srcs/Form.cpp					\
				srcs/Intern.cpp					\
				srcs/PresidentialPardonForm.cpp	\
				srcs/RobotomyRequestForm.cpp	\
				srcs/ShrubberyCreationForm.cpp	\

NAME		= ex03

CXX			= clang++

RM			= rm -f

CXXFLAGS	= -I includes -Wall -Wextra -Werror -std=c++98

OBJS		= $(SRCS:.cpp=.o)

$(NAME):	$(OBJS)
			@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
