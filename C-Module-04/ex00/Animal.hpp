#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const &copy);
        virtual ~Animal();
        virtual void makeSound() const;
        Animal const	&operator=(Animal const &copy);
        std::string const	&getType(void) const;
		void    setType(std::string const &type);
};

#endif