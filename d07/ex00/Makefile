# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 19:25:43 by ihestin           #+#    #+#              #
#    Updated: 2018/04/04 19:26:03 by ihestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = clang++
CFLAGS = -Wall -Werror -Wextra
SRC    = whatever.cpp 
OBJ    = $(SRC:.cpp=.o)
NAME   = whatever

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

