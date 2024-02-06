#ifndef	BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &copy_src);
		Brain &operator=(const Brain &rhs);
		~Brain(void);

	private:
		std::string	_ideas[100];
};

#endif