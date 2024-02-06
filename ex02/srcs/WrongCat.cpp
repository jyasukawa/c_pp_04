#include "WrongCat.hpp"

WrongCat::WrongCat()// : Animal() 
{
	std::cout << "WrongCat Default constructor called\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy_src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy_src;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "(meow)" << std::endl;
}
