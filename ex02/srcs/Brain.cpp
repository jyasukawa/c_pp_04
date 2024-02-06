#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "default";
}

Brain::Brain(const Brain &copy_src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy_src;
}

Brain	&Brain::operator=(const Brain &rhs)//浅くない、深いコピー
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}
