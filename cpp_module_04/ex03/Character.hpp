#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string name;
	AMateria	*inventory[4];
public:
	Character(const std::string &name);
	Character(const Character& other);
	const std::string &getName() const;
	Character& operator=(const Character& other);
	virtual ~Character();

	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};

#endif
