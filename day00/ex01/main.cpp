/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:16:00 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/20 21:42:17 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"


void    Print_Contacts(Phonebook *_Phonebook)
{
	std::string first, last, nick, desired_index;
	unsigned long index;

	std::cout << std::setw(10);
	std::cout << "   Index  " << "|";
	std::cout << std::setw(10);
	std::cout << "First Name" << "|";
	std::cout << std::setw(10);
	std::cout << "Last  Name" << "|";
	std::cout << std::setw(10);
	std::cout << " NickName "  << "|";
	std::cout << std::endl;

	for (size_t i = 0; i < _Phonebook->Get_Cur_Index(); i++)
	{
		first   = _Phonebook->Get_Contact(i)->Get_First();
		last    = _Phonebook->Get_Contact(i)->Get_Last();
		nick    = _Phonebook->Get_Contact(i)->Get_Nick();
		if (first.length() > 10)
		{
			first.resize(9);
			first.append(".");
		}
		if (last.length() > 10)
		{
			last.resize(9);
			last.append(".");
		}
		if (nick.length() > 10)
		{
			nick.resize(9);
			nick.append(".");
		}
		std::cout << std::setw(10);
		std::cout << std::to_string(i + 1) << "|";
		std::cout << std::setw(10);
		std::cout << first << "|";
		std::cout << std::setw(10);
		std::cout << last  << "|";
		std::cout << std::setw(10);
		std::cout << nick  << "|";
		std::cout << std::endl;
	}
	std::cout << "ENTER DESIRED CONTACT INDEX : ";
	getline(std::cin, desired_index);
	if (desired_index.length() > 0)
	{
		index = std::stoul(desired_index);
		if (index > _Phonebook->Get_Cur_Index() || _Phonebook->Get_Cur_Index() <= 0)
			std::cout << "Not A Valid Index" << std::endl;
		else
		{
			first   = _Phonebook->Get_Contact(index - 1)->Get_First();
			last    = _Phonebook->Get_Contact(index - 1)->Get_Last();
			nick    = _Phonebook->Get_Contact(index - 1)->Get_Nick();
			std::cout << std::setw(10);
			std::cout << std::to_string(index) << "|";
			std::cout << std::setw(10);
			std::cout << first << "|";
			std::cout << std::setw(10);
			std::cout << last  << "|";
			std::cout << std::setw(10);
			std::cout << nick  << "|";
			std::cout << std::endl;
		}
	}
		
}

int main()
{
	std::string _command;
	Phonebook   _Phonebook;
	while(1)
	{
		 std::cout << "ENTER YOUR COMMAND! : ";
		getline(std::cin, _command);
		if (_command == EXIT)
		{
			std::cout << "bye bye !!" << std::endl;
			exit (0);
		}
		else if (_command == ADD)
		{
			_Phonebook.Add();
		}
		else if (_command == SEARCH)
		{
			if (_Phonebook.Get_Cur_Index() <= 0)
				std::cout << "===>PhoneBook is currently empty" << std::endl;
			else
				Print_Contacts(&_Phonebook);
			
		}
		else if (_command.length() > 0)
			std::cout << _command << " : is not a valid command!?" << std::endl;
			
	}
}