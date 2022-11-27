#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main() {
    const Animal* meta = new Animal();
    const Animal* i = new Dog();
    const Animal* j = new Cat();
    const WrongAnimal* k = new WrongCat();

    std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    k->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    delete meta;
    delete i;
    delete j;
    delete k;
    return (0);
}