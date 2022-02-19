# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 06:03:26 by jin-lee           #+#    #+#              #
#    Updated: 2022/02/18 04:50:22 by jin-lee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CXX			= clang++
CXXFLAGS	= -Wall -Werror -Wextra

RED			= "\033[31m"
GREEN		= "\033[32m"
YELLOW		= "\033[33m"
EOC			= "\033[0m"

SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)

RM			= rm -f


all: $(NAME)


$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@echo $(GREEN)$(NAME) built successfully.$(EOC)

$(OBJS): $(SRCS)
	@$(CXX) $(CXXFLAGS) -c $^ -o $@

test1:
	@echo $(RED)
	./$(NAME) "shhhhh... I think the students are asleep..."
	@echo $(EOC)

test2:
	@echo $(YELLOW)
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@echo $(EOC)

test3:
	@echo $(GREEN)
	./$(NAME)
	@echo $(EOC)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all, $(NAME), clean, fclean, re