#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "=== Creating Animals ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog("Rex");
    const Animal* cat = new Cat();
    
    std::cout << "\n=== Creating Wrong Animals ===" << std::endl;
    const WrongAnimal* wrongCat = new WrongCat();
    const WrongAnimal* wrongAnimal = new WrongAnimal();

    std::cout << "\n=== Testing Types ===" << std::endl;
    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;
    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;

    std::cout << "\n=== Testing Sounds (Regular Animals) ===" << std::endl;
    std::cout << "Dog sound: ";
    dog->makeSound();
    std::cout << "Cat sound: ";
    cat->makeSound();
    std::cout << "Generic animal sound: ";
    meta->makeSound();

    std::cout << "\n=== Testing Sounds (Wrong Animals) ===" << std::endl;
    std::cout << "WrongCat sound: ";
    wrongCat->makeSound();  // This will demonstrate why it's "wrong" - no polymorphism
    std::cout << "WrongAnimal sound: ";
    wrongAnimal->makeSound();

    std::cout << "\n=== Testing Copy Constructor and Assignment ===" << std::endl;
    Dog originalDog("Buddy");
    Dog copiedDog(originalDog);
    std::cout << "Original dog type: " << originalDog.getType() << std::endl;
    std::cout << "Copied dog type: " << copiedDog.getType() << std::endl;

    std::cout << "\n=== Cleaning Up ===" << std::endl;
    delete meta;
    delete dog;
    delete cat;
    delete wrongCat;
    delete wrongAnimal;

    return 0;
}