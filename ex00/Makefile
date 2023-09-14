# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelasam <EHAB@student.42vienna.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 11:26:42 by eelasam           #+#    #+#              #
#    Updated: 2023/09/11 12:51:53 by eelasam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic -MMD -MP

RM = rm -rf

MEGAPHONE = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

all: $(MEGAPHONE)

$(MEGAPHONE): $(OBJ)
	@$(CXX) $(CPPFLAGS) $(OBJ) -o megaphone

clean:
	@$(RM) $(OBJ) $(DEPS)

fclean: clean
	@$(RM) $(MEGAPHONE)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)