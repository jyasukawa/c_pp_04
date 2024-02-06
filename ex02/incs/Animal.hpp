#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal &copy_src);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal(void);

		virtual void	makeSound(void) const = 0;//課題PDFのmainを実行するためにconstが必要。
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif
