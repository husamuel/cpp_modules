#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal
{
	private:
		std::string	type;
	public:
		Cat(void);
		Cat(std::string const &type);
		Cat(Cat const &copy);
		~Cat(void);
		Cat const	&operator=(Cat const &copy);
		void	makeSound(void) const;
};

#endif