NAME = ft_retro
CC = clang++

FILES =\
Core.cpp\
entities/AEntity.cpp\
entities/bullets/Bullet.cpp\
entities/EntityManager.cpp\
entities/mobs/BossMob.cpp\
entities/mobs/Mob.cpp\
entities/mobs/ShooterMob.cpp\
entities/objects/HealthPack.cpp\
entities/particles/Particle.cpp\
entities/particles/ParticleSystem.cpp\
entities/Player.cpp\
Game.cpp\
graphics/Screen.cpp\
main.cpp

BIN = bin/
SRC = $(addprefix srcs/,$(FILES))
OBJ = $(addprefix $(BIN),$(FILES:.cpp=.o))

INCLUDES = -I includes/
LIBS = -lncurses

FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

.PHONY: all clean fclean re

$(NAME): $(BIN) $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(INCLUDES) $(LIBS)

all: $(NAME)

$(BIN):
	@mkdir -p $(dir $(OBJ))

bin/%.o: srcs/%.cpp
	$(CC) $(FLAGS) -o $@ -c $< $(INCLUDES)

clean:
	rm -rf $(BIN)

fclean: clean
	rm -rf $(NAME)

re: fclean all
