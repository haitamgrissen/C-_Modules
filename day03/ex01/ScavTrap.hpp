/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 02:31:24 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/07 09:39:02 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap 
{
    private :
        
    public :
        ScavTrap();
        ScavTrap( std::string name );
		ScavTrap( ScavTrap const & scavtrap );
		~ScavTrap();
        ScavTrap & operator= (const ScavTrap &scarvtrap);
		void	guardGate(void);
        void	attack(std::string target);
};

#endif