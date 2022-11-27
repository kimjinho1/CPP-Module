#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria	*inventory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource& operator=(const MateriaSource &other);
	virtual ~MateriaSource();

	virtual void		learnMateria(AMateria *materia);
	virtual AMateria	*createMateria(const std::string &type);
};


#endif // _MATERIASOURCE_HPP__
