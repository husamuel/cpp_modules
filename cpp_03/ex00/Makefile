NAME = ClapTrap

all: $(NAME)

$(NAME): main.o ClapTrap.o
	c++ -Wall -Wextra -Werror -std=c++98 main.cpp ClapTrap.cpp -o $(NAME)

main.o: main.cpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp -o ClapTrap.o

clean:
	rm -f main.o ClapTrap.o

fclean: clean
	rm -f $(NAME)

re: fclean all