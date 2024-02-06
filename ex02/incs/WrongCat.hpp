#ifndef	WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &copy_src);
		WrongCat &operator=(const WrongCat &rhs);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif
