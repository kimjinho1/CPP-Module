#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
};

Dog::Dog(std::string name) {
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    this->name = name;
};

Dog::Dog(Brain brain) {
    std::cout << "Dog brain constructor called" << std::endl;
    type = "Dog";
    this->brain = new Brain(brain);
}

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
	delete brain;
};

void    Dog::makeSound(void) const {
    std::cout << "Dog: Bark!!" << std::endl;
}

void   Dog::setBrain(std::string str, int n) {
    for (int i = 0; i < n; i++)
        brain->setIdeas(str, n);
}

Brain   &Dog::getBrain(void) const {
    return *brain;
}