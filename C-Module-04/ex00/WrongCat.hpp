#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
	private:
		std::string	type;
	public:
		WrongCat(void);
		WrongCat(std::string const &type);
		WrongCat(WrongCat const &copy);
		virtual ~WrongCat(void);
		WrongCat const	&operator=(WrongCat const &copy);
		void	makeSound(void) const;
};

#endif