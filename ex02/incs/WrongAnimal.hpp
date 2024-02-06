#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy_src);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		virtual ~WrongAnimal(void);

		void	makeSound(void) const;//課題PDFのmainを実行するためにconstが必要。
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif