#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(std::string name) : type("WrongAnimal"), name(name) {
    std::cout << "WrongAnimal constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal const &other) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
};

std::string WrongAnimal::getType(void) const {
    return type;
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal: Hi!!" << std::endl;
}