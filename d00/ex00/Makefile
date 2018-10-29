# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 10:40:45 by ihestin           #+#    #+#              #
#    Updated: 2018/03/26 10:49:35 by ihestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = clang++
CFLAGS = -Wall -Werror -Wextra
SRC    = megaphone.cpp
OBJ    = $(SRC:.cpp=.o)
NAME   = megaphone

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

