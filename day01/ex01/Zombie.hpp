/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 01:32:59 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 16:54:23 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie
{
	private:
		std::string _name;
		
	public:
					Zombie(void);
					~Zombie(void);
		void        announce(void);
		std::string Get_name();
		void        Set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif