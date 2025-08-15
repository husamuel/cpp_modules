#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor was called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(std::string const &type)
{
    std::cout << "Cat was create" << std::endl;
    this->type = type;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << "Cat Copy Constructor was called" << std::endl;
    this->type = copy.type;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor was called" << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
    if(this != &copy)
    {
        Animal::operator=(copy);
        this->type = copy.type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!🐈" << std::endl;
}