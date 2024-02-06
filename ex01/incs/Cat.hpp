#ifndef	CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat &copy_src);
		Cat &operator=(const Cat &rhs);
		virtual ~Cat(void);

		void	makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif
