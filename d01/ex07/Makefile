# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ihestin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/28 20:25:46 by ihestin           #+#    #+#              #
#    Updated: 2018/03/28 20:26:02 by ihestin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = clang++
CFLAGS = -Wall -Werror -Wextra
SRC    = sedfirst.cpp
OBJ    = $(SRC:.cpp=.o)
NAME   = sedfirst

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

