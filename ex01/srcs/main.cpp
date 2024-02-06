#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	Animal	*animal_array[10];

	for (int i = 0; i < 10; i += 2)
	{
		std::cout << i << std::endl;
		animal_array[i] = new Dog();
		std::cout << "------------------------------------------" << std::endl;
		std::cout << i + 1 << std::endl;
		animal_array[i + 1] = new Cat();
		std::cout << "------------------------------------------" << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
		delete animal_array[i];
		std::cout << "------------------------------------------" << std::endl;
	}

	Dog	dog;
	Dog	copy_dog = dog;
	std::cout << &dog << std::endl;
	std::cout << &copy_dog << std::endl;

	return (0);
}

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q a.out");
// }