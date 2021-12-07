/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:47:47 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/07 09:57:43 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"


class FragTrap : public ClapTrap 
{
    private :
        
    public :
        FragTrap();
        FragTrap( std::string name );
		FragTrap( FragTrap const & scavtrap );
		~FragTrap();
        FragTrap & operator= (const FragTrap &scarvtrap);
		void	 highFivesGuys(void);
        void	attack(std::string target);
};

#endif