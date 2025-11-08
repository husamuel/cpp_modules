NAME = ScavTrap

all: $(NAME)

$(NAME): main.o ClapTrap.o ScavTrap.o
	c++ -Wall -Wextra -Werror -std=c++98 main.o ClapTrap.o ScavTrap.o -o $(NAME)

main.o: main.cpp ClapTrap.hpp ScavTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp -o ClapTrap.o

ScavTrap.o: ScavTrap.cpp ScavTrap.hpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ScavTrap.cpp -o ScavTrap.o

clean:
	rm -f main.o ClapTrap.o ScavTrap.o

fclean: clean
	rm -f $(NAME)

re: fclean all
