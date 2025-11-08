NAME = FragTrap

all: $(NAME)

$(NAME): main.o ClapTrap.o ScavTrap.o FragTrap.o
	c++ -Wall -Wextra -Werror -std=c++98 main.o ClapTrap.o ScavTrap.o FragTrap.o -o $(NAME)

main.o: main.cpp ClapTrap.hpp FragTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c main.cpp -o main.o

ClapTrap.o: ClapTrap.cpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ClapTrap.cpp -o ClapTrap.o

ScavTrap.o: ScavTrap.cpp ScavTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c ScavTrap.cpp -o ScavTrap.o

FragTrap.o: FragTrap.cpp FragTrap.hpp ScavTrap.hpp ClapTrap.hpp
	c++ -Wall -Wextra -Werror -std=c++98 -c FragTrap.cpp -o FragTrap.o

clean:
	rm -f main.o ClapTrap.o FragTrap.o

fclean: clean
	rm -f $(NAME)

re: fclean all
