/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:12:35 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/07 09:24:40 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected :
        std::string name;
        int         hp;
        int         ep;
        int         ad;
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrap);
        ~ClapTrap();
        ClapTrap & operator= (const ClapTrap &claptrap);
        //  Getters And Setters
        void        setName(std::string name);
        void        setHP(int val);
        void        setEP(int val);
        void        setAD(int val);
        std::string getName();
        int         getHP();
        int         getEP();
        int         getAD();
    
        void        attack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};

#endif