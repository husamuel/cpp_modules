#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal
{
    private:
        std::string type;
    public:
        Dog();
        Dog(std::string type);
        Dog(Dog const &copy);
        virtual ~Dog();
        Dog const	&operator=(Dog const &copy);
        std::string const	&getType(void) const;
		void				setType(std::string const &type);
        void makeSound() const;
};

#endif