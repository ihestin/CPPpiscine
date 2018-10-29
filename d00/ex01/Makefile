# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 10:40:45 by ihestin           #+#    #+#              #
#    Updated: 2018/03/26 16:45:07 by ihestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = clang++
CFLAGS = -Wall -Werror -Wextra
SRC    = phonebook.cpp Phonebook.class.cpp Contact.class.cpp
OBJ    = $(SRC:.cpp=.o)
NAME   = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

%.o: %.cpp
	$(CC)   -o $@ -c  $< $(CFLAGS)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

