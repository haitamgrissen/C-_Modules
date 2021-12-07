/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:11:46 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/07 09:42:43 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
# include "ScavTrap.hpp"


int main()
{
    ScavTrap a("one");


    std::cout << std::endl;

    
    ClapTrap b("two");



    a.setAD(9);

    std::cout << std::endl;


    
    a.attack(b.getName());
    a.takeDamage(5);
    a.beRepaired(4);

    std::cout << std::endl;
    b.attack(a.getName());
    std::cout << std::endl;

    a.guardGate();
    
    std::cout << std::endl;
}