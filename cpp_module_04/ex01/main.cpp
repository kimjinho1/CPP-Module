#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void    a(void) {
    system("leaks ex01");
}

int main() {
    atexit(a);
    Animal	*animals[4];

	for(int i = 0; i < 4; i++) {
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
    std::cout << std::endl;
	for(int i = 0; i < 4; i++)
		animals[i]->makeSound();
    std::cout << std::endl;
	
	for(int i = 0; i < 4; i++)
		delete animals[i];
    std::cout << std::endl;
	
	Brain brain;
    std::cout << std::endl;
	Cat cat(brain);
    std::cout << std::endl;
	Dog dog(brain);
    std::cout << std::endl;

	brain.setIdeas("brain", 100);
	cat.setBrain("cat", 100);
	dog.setBrain("dog", 100);
    brain.printIdeas(1);
    cat.getBrain().printIdeas(1);
    dog.getBrain().printIdeas(1);
    std::cout << std::endl;
	return 0;
}
