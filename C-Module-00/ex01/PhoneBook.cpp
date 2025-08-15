#include "./PhoneBook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << "Created an empty phonebook for up to 8 contacts" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook is removed" << std::endl;
}

std::string format_column(std::string str)
{	
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return std::string(10 - str.length(), ' ') + str;
}

bool valid_input(const std::string& str)
{
    return !str.empty() && str.find_first_not_of(" \t\n\r\f\v") != std::string::npos;
}

void Phonebook::add(void)
{
    std::string first_name, last_name, nick, phone_num, secret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);

    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);

    std::cout << "Enter nick name: ";
    std::getline(std::cin, nick);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_num);

    std::cout << "Enter a secret: ";
    std::getline(std::cin, secret);

    if (!valid_input(first_name) ||
        !valid_input(last_name) ||
        !valid_input(nick) ||
        !valid_input(phone_num) ||
        !valid_input(secret))
    {
        std::cout << "Error: No field can be empty or contain only whitespace. Contact not added." << std::endl;
        return;
    }

    _contacts[_index].set_fname(first_name);
    _contacts[_index].set_lname(last_name);
    _contacts[_index].set_nick(nick);
    _contacts[_index].set_phone_num(phone_num);
    _contacts[_index].set_secret(secret);

    _index = (_index + 1) % 8;
}

void Phonebook::search(void)
{
	int i = 0;

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;


	while (i < 8)
	{
		if (!_contacts[i].get_fname().empty())
		{
			std::cout << "|"
					<< std::setw(10) << i
					<< "|"
					<< format_column(_contacts[i].get_fname())
					<< "|"
					<< format_column(_contacts[i].get_lname())
					<< "|"
					<< format_column(_contacts[i].get_nick())
					<< "|" << std::endl;
		}
		i++;
	}

	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "Enter the index of the contact to view details: ";

	std::string index_str;
	std::getline(std::cin, index_str);

	std::stringstream ss(index_str);
	int index;
	if (!(ss >> index)) {
		std::cout << "Invalid input for index." << std::endl;
		return;
	}

	if (index >= 0 && index < 8 && !_contacts[index].get_fname().empty())
	{
		std::cout << "Details for contact at index " << index << ":" << std::endl;
		std::cout << "First Name: " << _contacts[index].get_fname() << std::endl;
		std::cout << "Last Name: " << _contacts[index].get_lname() << std::endl;
		std::cout << "Nickname: " << _contacts[index].get_nick() << std::endl;
		std::cout << "Phone Number: " << _contacts[index].get_phone_num() << std::endl;
		std::cout << "Secret: " << _contacts[index].get_secret() << std::endl;
	}
	else
	{
		std::cout << "Invalid index or no contact at this index." << std::endl;
	}
}
