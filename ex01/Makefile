# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelasam <Ehab@student.42vienna.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 14:55:45 by eelasam           #+#    #+#              #
#    Updated: 2023/09/05 19:31:33 by eelasam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CPPFLAGS = -Wall -Werror -Wextra -g -std=c++98 -pedantic

RM = rm -rf

PHONEBOOK = phonebook

SRC = PhoneBook.cpp main.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(PHONEBOOK)

$(PHONEBOOK): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o phonebook

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(PHONEBOOK)

re: fclean all

.PHONY: all clean fclean re
