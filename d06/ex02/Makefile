# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 16:35:49 by ihestin           #+#    #+#              #
#    Updated: 2018/04/04 16:36:38 by ihestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = clang++
CFLAGS = -Wall -Werror -Wextra
SRC    = Identify.cpp 
OBJ    = $(SRC:.cpp=.o)
NAME   = Identify

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

