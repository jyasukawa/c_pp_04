#include "Dog.hpp"

Dog::Dog()// : Animal() 
{
	std::cout << "Dog Default constructor called\n";
	this->_type = "Dog";
	this->_brain = new Brain();
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
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "(bowwow)" << std::endl;
}
