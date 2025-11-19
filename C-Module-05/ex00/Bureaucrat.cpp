#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Constructer called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    this->name = other.name;
    this->grade = other.grade;
    std::cout << "Copy constructed called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if(this != other)
    {
        this->name = other.name;
        this->grade = other.grade;
    }
    std::cout << "Operator constructer called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructer called" << std::endl;
}

std::string Bureaucrat::getName()
{
    return name;
}

int Bureaucrat::getGrade()
{
    return grade;
}

void Bureaucrat::increment(int i)
{
    
    grade += 1; 
}

void Bureaucrat::decrement(int i)
{
    grade -= 1;
}