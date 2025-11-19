#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <sstream>

int main()
{
    std::stringstream ss;
    Dog* dog1 = new Dog();
    Cat* cat1 = new Cat();

    for (int i = 0; i < 5; i++)
    {
        ss.str("");
        ss << i;
        dog1->set_idea("Bone " + ss.str(), i);
        cat1->set_idea("Fish " + ss.str(), i);
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << dog1->get_idea(i) << std::endl;
        std::cout << cat1->get_idea(i) << std::endl;
    }

    Dog* dog2 = new Dog(*dog1);
    dog2->set_idea("Meat", 0);
    std::cout << "dog1 idea[0]: " << dog1->get_idea(0) << std::endl;
    std::cout << "dog2 idea[0]: " << dog2->get_idea(0) << std::endl;

    Cat cat2;
    cat2 = *cat1;
    cat2.set_idea("Mouse", 0);
    std::cout << "cat1 idea[0]: " << cat1->get_idea(0) << std::endl;
    std::cout << "cat2 idea[0]: " << cat2.get_idea(0) << std::endl;

    delete dog1;
    delete dog2;
    delete cat1;

    return 0;
}
