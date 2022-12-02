#include "Data.hpp"

Data::Data() {}

Data::Data(const Data &other) {
	*this = other;
}

Data	&Data::operator=(const Data &other) {
	if (this != &other)
		n = other.getN();
	return *this;
}

Data::~Data() {}

int	Data::getN(void) const {
	return n;
}

void	Data::setN(int n) {
	this->n = n;
}

uintptr_t	serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
