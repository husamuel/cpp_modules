#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <sstream>

int main()
{
    Dog* dog = new Dog();
    Cat* cat = new Cat();

    dog->getBrain()->setIdea(0, "Chase cat");
    cat->getBrain()->setIdea(0, "Sleep");

    std::cout << "Dog idea[0]: " << dog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat idea[0]: " << cat->getBrain()->getIdea(0) << std::endl;

    delete dog;
    delete cat;

    Animal* animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    delete animals[0]; 
    delete animals[1]; 

    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "Original Dog Idea");

    Dog copiedDog = originalDog; 
    copiedDog.getBrain()->setIdea(0, "Copied Dog Idea");

    std::cout << "Original Dog idea[0]: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog idea[0]: " << copiedDog.getBrain()->getIdea(0) << std::endl;

    Cat originalCat;
    originalCat.getBrain()->setIdea(0, "Original Cat Idea");

    Cat copiedCat;
    copiedCat = originalCat;
    copiedCat.getBrain()->setIdea(0, "Copied Cat Idea");

    std::cout << "Original Cat idea[0]: " << originalCat.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat idea[0]: " << copiedCat.getBrain()->getIdea(0) << std::endl;

    return 0;
}
