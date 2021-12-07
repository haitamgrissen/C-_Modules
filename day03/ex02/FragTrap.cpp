/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:47:28 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/07 09:57:28 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

            FragTrap::FragTrap()
            {
            }

            FragTrap::FragTrap(std::string name): ClapTrap(name)
            {
                std::cout << this->name << " FragTrap" << std::endl;
                this->hp = 100;
                this->ep = 100;
                this->ad = 30;
            }

            FragTrap::FragTrap(FragTrap const & fragtrap)
            {
                this->operator=(fragtrap);
            }

            FragTrap::~FragTrap()
            {
                std::cout << this->name <<  " FragTrap Destructor" << std::endl;
            }

            FragTrap&	FragTrap::operator=( FragTrap const & fragtrap)
            {
                this->name = fragtrap.name;
                this->hp = fragtrap.hp;
                this->ep = fragtrap.ep;
                this->ad = fragtrap.ad;
                return *this;
            }

            void    FragTrap:: highFivesGuys()
            {
                std::cout << "High five guys" << std::endl;
            }
            
            void    FragTrap::attack(std::string target)
            {
                std::cout << "FragTrap " << this->name << " attacked " << target << ", causing " << this->ad << " points of damage!" << std::endl;
            }
