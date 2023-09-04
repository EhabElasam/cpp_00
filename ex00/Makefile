# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelasam <Ehab@student.42vienna.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 11:26:42 by eelasam           #+#    #+#              #
#    Updated: 2023/09/04 14:38:47 by eelasam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

RM = rm -rf

MEGAPHONE = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(MEGAPHONE)

$(MEGAPHONE): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o megaphone

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(MEGAPHONE)

re: fclean all

.PHONY: all clean fclean re