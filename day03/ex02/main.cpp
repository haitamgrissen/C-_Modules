/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:11:46 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/07 09:59:14 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
# include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    FragTrap a("fraggy");


    std::cout << std::endl;

    
    ClapTrap b("clappy");



    std::cout << std::endl;


    
    a.attack(b.getName());
    a.takeDamage(5);
    a.beRepaired(4);

    std::cout << std::endl;
    b.attack(a.getName());
    std::cout << std::endl;

    a.highFivesGuys();
    
    std::cout << std::endl;
}