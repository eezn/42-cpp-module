# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jin-lee <jin-lee@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 12:34:14 by jin-lee           #+#    #+#              #
#    Updated: 2022/02/23 14:57:03 by jin-lee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Fixed_00

CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

RED			= "\033[31m"
GREEN		= "\033[32m"
YELLOW		= "\033[33m"
EOC			= "\033[0m"

INCS_DIR	= ./
SRCS_DIR	= ./

SRCS		= ./main.cpp \
			  ./Fixed.cpp

OBJS_DIR	= ./objs
OBJS		= $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.cpp=.o)))
vpath %.cpp $(SRCS_DIR)

RM			= rm -f


all: $(NAME)


$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@echo $(GREEN)$(NAME) built successfully.$(EOC)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) -I $(INCS_DIR) -c $^ -o $@

$(OBJS_DIR):
	@mkdir -p $@


clean:
	@$(RM) -r $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)

re : fclean all

.PHONY: all, $(NAME), clean, fclean, re