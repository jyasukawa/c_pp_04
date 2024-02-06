#include "Cat.hpp"

Cat::Cat()// : Animal() 
{
	std::cout << "Cat Default constructor called\n";
	this->_type = "Cat";
	this->_brain = new Brain();
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
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "(meow)" << std::endl;
}
