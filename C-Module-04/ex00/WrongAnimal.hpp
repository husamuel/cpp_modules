#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &copy);
        virtual ~WrongAnimal();
        void makeSound() const;
        WrongAnimal const	&operator=(WrongAnimal const &copy);
        std::string const	&getType(void) const;
		void    setType(std::string const &type);
};

#endif