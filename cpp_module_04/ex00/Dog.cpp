#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(std::string name) {
    type = "Dog";
    this->name = name;
    std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(Dog const &other) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
};

void    Dog::makeSound(void) {
    std::cout << "Dog: Bark!!" << std::endl;
}