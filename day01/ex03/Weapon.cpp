/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:10:11 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 19:09:39 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
    
}

Weapon::~Weapon()
{
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

std::string    Weapon::getType()
{
    return (this->type);
}



