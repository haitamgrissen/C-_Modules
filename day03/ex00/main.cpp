/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:11:46 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/06 02:13:59 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"


int main()
{
    ClapTrap a("haitam");
    ClapTrap b("souhail");

    a.setAD(9);
    a.attack(b.getName());
    a.takeDamage(5);
    a.beRepaired(4);
}