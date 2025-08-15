CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME	=	SlavTrap
FILES	=	main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ		=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJ) $(wildcard *.gch)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all