#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
};

Animal::Animal(std::string name) : type("Animal"), name(name) {
    std::cout << "Animal constructor called" << std::endl;
};

Animal::Animal(Animal const &other) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
};

std::string Animal::getType(void) const {
    return type;
}

void    Animal::makeSound(void) const {
    std::cout << "Animal: Hi!!" << std::endl;
}