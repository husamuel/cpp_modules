#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat created with default constructor." << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	this->_brain = new Brain(*copy._brain);
	std::cout << "Cat copied." << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destroyed." << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	Animal::operator=(copy);
	//*this->_brain = *copy._brain;
	std::cout << "Assignment operator for Cat called." << std::endl;
	return (*this);
}

std::string const	&Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::setType(const std::string &type)
{
	this->_type = type;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat From Animal goes Meow!" << std::endl;
}

Brain &Cat::getBrain(void) const
{
	return (*this->_brain);
}

void	Cat::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}