#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy_src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy_src;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "(WrongAnimal default sound)" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
