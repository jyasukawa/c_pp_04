#include "Dog.hpp"

Dog::Dog()// : Animal() 
{
	std::cout << "Dog Default constructor called\n";
	this->_type = "Dog";
}

Dog::Dog(const Dog &copy_src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy_src;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "(bowwow)" << std::endl;
}
