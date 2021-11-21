/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:13:07 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 01:10:18 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

# define ADD "ADD"
# define EXIT "EXIT"
# define SEARCH "SEARCH"

 class Contact
 {

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public:
		Contact();
		std::string	Get_First(void);
		std::string	Get_Last(void);
		std::string	Get_Nick(void);
		std::string	Get_Number(void);
		std::string	Get_Darkest(void);

		void		Set_First(std::string val);
		void		Set_Last(std::string val);
		void		Set_Nick(std::string val);
		void		Set_Number(std::string val);
		void		Set_Darkest(std::string val);
		
 };
 
 class Phonebook
 {
		Contact		_Contacts[8];
		size_t		_Cur_index;
		size_t		_old_index;
	public:
		Phonebook(void);
		~Phonebook();
		void		Add();
		void		Search();
		void		Set_Contact(size_t i);
		Contact*	Get_Contact(size_t i);
		size_t		Get_Cur_Index();
		void		Set_Cur_Index(size_t i);
		size_t		Get_Old_Index();
		void		Set_Old_Index(size_t i);
 };


 bool	is_Number(const std::string& s);

 #endif
 