#include "Animal.hpp"

Animal::Animal(void) : _type("Default")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy_src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy_src;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "(Animal default sound)" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
