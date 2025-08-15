#include "./ex00/Animal.hpp"
#include "./ex00/Dog.hpp"
#include "./ex00/Cat.hpp"
#include "Brain.hpp"

#define N_ANIMALS 10

#define N_ANIMALS 10

int main(void)
{
    // Create array of Animal pointers
    Animal* animals[N_ANIMALS];

    // Fill first half with Dogs
    for (int i = 0; i < N_ANIMALS / 2; i++)
        animals[i] = new Dog();

    // Fill second half with Cats
    for (int i = N_ANIMALS / 2; i < N_ANIMALS; i++)
        animals[i] = new Cat();

    // Test deep copy in separate scope
    {
        std::cout << "\n=== Testing Deep Copy ===" << std::endl;
        Dog original;
        Dog copy = original;  // Should create a deep copy
        // Both objects go out of scope here - should see two separate destructor calls
    }

    // Clean up all animals
    std::cout << "\n=== Cleaning Up Animals ===" << std::endl;
    for (int i = 0; i < N_ANIMALS; i++)
        delete animals[i];

    return 0;
}