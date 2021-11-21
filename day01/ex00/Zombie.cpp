/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 01:32:56 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 02:13:52 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    
}

Zombie::~Zombie()
{
    std::cout << this->_name << "   T_T braiiii ii i nn   n... ..     ." << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << "    BraiiiiiiinnnzzzZ..." << std::endl;
}