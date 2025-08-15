#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>
#include "./../Brain.hpp"

class Dog: public Animal
{
	private:
		Brain		*_brain;
	public:
		Dog(void);
		Dog(Dog const &copy);
		~Dog(void);

		Dog const	&operator=(Dog const &copy);

		std::string const	&getType(void) const;
		Brain 				&getBrain(void) const;
		void				setType(std::string const &type);
		void				setBrain(Brain const &brain);

		void	makeSound(void) const;
};

#endif