/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 02:31:28 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/07 09:39:46 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

            ScavTrap::ScavTrap()
            {
            }

            ScavTrap::ScavTrap(std::string name): ClapTrap(name)
            {
                std::cout << this->name << " ScavTrap" << std::endl;
                this->hp = 10;
                this->ep = 10;
                this->ad = 0;
            }

            ScavTrap::ScavTrap(ScavTrap const & scavtrap)
            {
                this->operator=(scavtrap);
            }

            ScavTrap::~ScavTrap()
            {
                std::cout << this->name <<  " ScavTrap Destructor" << std::endl;
            }

            ScavTrap&	ScavTrap::operator=( ScavTrap const & scavtrap)
            {
                this->name = scavtrap.name;
                this->hp = scavtrap.hp;
                this->ep = scavtrap.ep;
                this->ad = scavtrap.ad;
                return *this;
            }

            void    ScavTrap::guardGate()
            {
                std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
            }
            
            void    ScavTrap::attack(std::string target)
            {
                std::cout << "ScavTrap " << this->name << " attacked " << target << ", causing " << this->ad << " points of damage!" << std::endl;
            }