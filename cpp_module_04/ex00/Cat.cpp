#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
};

Cat::Cat(std::string name) {
    type = "Cat";
    this->name = name;
    std::cout << "Dog constructor called" << std::endl;
};

Cat::Cat(Cat const &other) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
};

void    Cat::makeSound(void) {
    std::cout << "Cat: Meow!!" << std::endl;
}