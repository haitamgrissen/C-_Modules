/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:09:58 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 19:04:12 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"


class HumanB
{
	private:
		Weapon*        	weapon;
		std::string     name;
	public:
						HumanB(std::string name);
						~HumanB();
		void            attack();
		void			setWeapon(Weapon& weapon);
};







#endif