#include "Array.hpp"

int	main(void)
{
    Array<int>	numbers(MAX_VAL);
    int*		mirror = new int[MAX_VAL];

    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int	value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << std::endl;
	std::cout << "----------------------------------" << std::endl;
    {
        Array<int> tmp = numbers;
    	for (int i = 0; i < MAX_VAL; i++)
			std::cout << tmp[i] << std::endl;
		std::cout << "----------------------------------" << std::endl;
        Array<int> test(tmp);
    	for (int i = 0; i < MAX_VAL; i++)
			std::cout << test[i] << std::endl;
		std::cout << "----------------------------------" << std::endl;

    	for (int i = 0; i < MAX_VAL; i++)
			tmp[i] = i + 10;
    	for (int i = 0; i < MAX_VAL; i++)
			std::cout << tmp[i] << std::endl;
    	for (int i = 0; i < MAX_VAL; i++)
			std::cout << test[i] << std::endl;
		std::cout << "----------------------------------" << std::endl;
    }

    try {
		std::cout << numbers[-2] << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;;
    }
	std::cout << "----------------------------------" << std::endl;

    try {
		std::cout << numbers[MAX_VAL] << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;;
    }
	std::cout << "----------------------------------" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = rand();
    for (int i = 0; i < MAX_VAL; i++)
		std::cout << numbers[i] << std::endl;
    delete [] mirror;
    return 0;
}