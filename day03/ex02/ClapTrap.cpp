/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:12:38 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/07 09:39:53 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ClapTrap <name> attack <target>, causing <damage> points of damage!

#include "ClapTrap.hpp"

/*
    Canonical form
*/

            ClapTrap::ClapTrap()
            {
            }


            ClapTrap::ClapTrap(std::string name): name(name)
            {
                std::cout << this->name << " ClapTrap" << std::endl;
                this->hp = 10;
                this->ep = 10;
                this->ad = 0;
            }

            ClapTrap::ClapTrap(ClapTrap const & claptrap)
            {
                this->operator=(claptrap);
            }

            ClapTrap::~ClapTrap()
            {
                std::cout << this->name << " ClapTrap Destructor" << std::endl;
            }

            ClapTrap&	ClapTrap::operator=( ClapTrap const & claptrap)
            {
                this->name = claptrap.name;
                this->hp = claptrap.hp;
                this->ep = claptrap.ep;
                this->ad = claptrap.ad;
                return *this;
            }

/*
    getters and setters
*/

            void        ClapTrap::setName(std::string name)
            {
                this->name = name;
            }

            void        ClapTrap::setHP(int val)
            {
                this->hp = val;
            }

            void        ClapTrap::setEP(int val)
            {
                this->ep = val;
            }

            void        ClapTrap::setAD(int val)
            {
                this->ad = val;
            }


            std::string ClapTrap::getName()
            {
                return (this->name);
            }

            int         ClapTrap::getHP()
            {
                return (this->hp);
            }

            int         ClapTrap::getEP()
            {
                return (this->ep);
            }

            int         ClapTrap::getAD()
            {
                return (this->ad);
            }

/*
    Functions
*/

            void        ClapTrap::attack(std::string const & target)
            {
                std::cout << "ClapTrap " << this->name << " attacked " << target << ", causing " << this->ad << " points of damage!" << std::endl;
            }

            void        ClapTrap::takeDamage(unsigned int amount)
            {
                std::cout << this->name << " took Damage, causing " << amount << " points of damage!" << std::endl;
            }

            void        ClapTrap::beRepaired(unsigned int amount)
            {
                std::cout << this->name << " has been repaired, causing " << amount << " points regained!" << std::endl;
            }
