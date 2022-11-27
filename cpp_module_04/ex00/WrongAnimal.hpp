#ifndef WRONGAINMAL_HPP
# define WRONGAINMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
    std::string type;
    std::string name;
public:
    WrongAnimal();
    WrongAnimal(std::string name);
    WrongAnimal(WrongAnimal const &other);
    WrongAnimal &operator=(const WrongAnimal &other);
    ~WrongAnimal();

    std::string getType(void) const;
    void        makeSound(void) const;
};

#endif
