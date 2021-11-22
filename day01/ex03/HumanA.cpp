/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:10:07 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 19:07:12 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"
# include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :  weapon(weapon), name(name)
{

}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
    std::string type = this->weapon.getType();
	std::cout << this->name << " attacks with his " << type << std::endl;
}