#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <stdlib.h>

class Phonebook
{
	private:
	Contact contact_arr[8];
	int contact_index_;
	public:
		Phonebook()
		{
			contact_index_ = 0;
		}
		void add_new_contact();
		void search_contact();
};

#endif
