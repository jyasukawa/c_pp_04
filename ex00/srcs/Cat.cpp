#include "Cat.hpp"

Cat::Cat()// : Animal() 
{
	std::cout << "Cat Default constructor called\n";
	this->_type = "Cat";
}

Cat::Cat(const Cat &copy_src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy_src;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "(meow)" << std::endl;
}
