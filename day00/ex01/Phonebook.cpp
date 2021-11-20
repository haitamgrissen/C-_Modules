/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:12:02 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/20 21:48:33 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

		/*/			Contact Setters			/*/
void Contact::Set_First(std::string val)
{
	this->first_name = val;
}

void Contact::Set_Last(std::string val)
{
	this->last_name = val;
}

void Contact::Set_Nick(std::string val)
{
	this->nickname = val;
}

void Contact::Set_Number(std::string val)
{
	this->phone_number = val;
}

void Contact::Set_Darkest(std::string val)
{
	this->darkest_secret = val;
}

		/*/			Contact Getters			/*/
std::string Contact::Get_First()
{
	return (this->first_name);
}

std::string Contact::Get_Last()
{
	return (this->last_name);
}

std::string Contact::Get_Nick()
{
	return (this->nickname);
}

std::string Contact::Get_Number()
{
	return (this->phone_number);
}

std::string Contact::Get_Darkest()
{
	return (this->darkest_secret);
}
		/*/			Contact Constructor			/*/
Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}



		/*/		PhoneBook Constructor	/*/
Phonebook::Phonebook(void)
{
	this->_Cur_index = 0;
	this->_old_index = 0;
	return;
}

void	Phonebook::Add()
{
	size_t i;
	size_t j;
	std::string val;

	i = this->Get_Cur_Index();
	j = this->Get_Old_Index();
	if (i >= 8)
	{
		i = j;
		j++;
		if (j >= 8)
			this->Set_Old_Index(0);
		else
			this->Set_Old_Index(j);
	}
	std::cout << "first name : ";
	getline(std::cin, val);
	this->Get_Contact(i)->Set_First(val);
	std::cout << "last name : ";
	getline(std::cin, val);
	this->Get_Contact(i)->Set_Last(val);
	std::cout << "nickname : ";
	getline(std::cin, val);
	this->Get_Contact(i)->Set_Nick(val);
	std::cout << "phone number : ";
	getline(std::cin, val);
	this->Get_Contact(i)->Set_Number(val);
	std::cout << "darkest secret : ";
	getline(std::cin, val);
	this->Get_Contact(i)->Set_Darkest(val);

	i++;
	if (j <= 0)
		this->Set_Cur_Index(i);
	
}

void	Phonebook::Search()
{
	
}

Contact	*Phonebook::Get_Contact(size_t i)
{
	return (&this->_Contacts[i]);
}

size_t Phonebook::Get_Cur_Index()
{
	return (this->_Cur_index);
}

void	Phonebook::Set_Cur_Index(size_t i)
{
	this->_Cur_index = i;
}
size_t Phonebook::Get_Old_Index()
{
	return (this->_old_index);
}

void	Phonebook::Set_Old_Index(size_t i)
{
	this->_old_index = i;
}

Phonebook::~Phonebook()
{
	return;
}