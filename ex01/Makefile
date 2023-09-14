# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelasam <EHAB@student.42vienna.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 14:55:45 by eelasam           #+#    #+#              #
#    Updated: 2023/09/11 12:49:56 by eelasam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -g -std=c++98 -pedantic -MMD -MP

RM = rm -rf

PHONEBOOK = phonebook

SRC = PhoneBook.cpp main.cpp 
OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

all: $(PHONEBOOK)

$(PHONEBOOK): $(OBJ)
	@$(CXX) $(CPPFLAGS) $(OBJ) -o phonebook

clean:
	@$(RM) $(OBJ) $(DEPS)

fclean: clean
	@$(RM) $(PHONEBOOK)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)
