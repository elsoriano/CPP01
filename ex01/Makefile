NAME = ZombieHorde
SRCS = Zombie.cpp main.cpp ZombieHorde.cpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re run

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "Nothing to clean (no object files)."

fclean: clean
	@rm -f $(NAME)

re: fclean all

debug:
	$(CC) -g $(CFLAGS) $(SRCS) -o $(NAME)