#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "../Brain.hpp"

class Animal
{
    protected:
        std::string type;
	public:
		std::string	_type;
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &copy);
		virtual ~Animal(void);

		Animal const	&operator=(Animal const &copy);

		std::string const	&getType(void) const;
		void				setType(std::string const &type);
		virtual Brain 		&getBrain(void) const = 0;

		virtual void	makeSound(void) const;
};

#endif