#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data {
private:
	int	n;
public:
	Data();
	Data(const Data &other);
	Data &operator=(const Data &other);
	~Data();

	int		getN(void) const;
	void	setN(int n);
};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif
