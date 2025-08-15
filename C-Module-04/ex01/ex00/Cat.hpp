#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>
#include "./../Brain.hpp"

class Cat: public Animal
{
	private:
		Brain		*_brain;
	public:
		Cat(void);
		Cat(Cat const &copy);
		~Cat(void);

		Cat const	&operator=(Cat const &copy);

		std::string const	&getType(void) const;
		Brain 				&getBrain(void) const;
		void				setType(std::string const &type);
		void				setBrain(Brain const &brain);

		void	makeSound(void) const;
};
#endif