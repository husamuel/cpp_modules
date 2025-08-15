#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <sstream>

class	Phonebook
{
	private:
		Contact	_contacts[8];
		int		_index;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);

};

#endif