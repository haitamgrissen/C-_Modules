/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 01:32:56 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 16:52:09 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(void)
{
    
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << "   T_T braiiii ii i nn   n... ..     ." << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << "    BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string    Zombie::Get_name( void )
{
    return (this->_name);
}

void    Zombie::Set_name(std::string name)
{
    this->_name = name;
}