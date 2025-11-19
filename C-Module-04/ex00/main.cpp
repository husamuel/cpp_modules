#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Correct hierarchy ===" << std::endl;

    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " says: ";
    dog->makeSound();

    std::cout << cat->getType() << " says: ";
    cat->makeSound();

    std::cout << "Animal says: ";
    meta->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n=== Wrong hierarchy ===" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " says: ";
    wrongCat->makeSound(); 

    std::cout << "Wrong Animal says: ";
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
