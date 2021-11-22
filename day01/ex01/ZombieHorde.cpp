/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 02:24:17 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 17:00:35 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie*     horde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
       horde[i].Set_name(name + " " + std::to_string(i + 1));
    }
    return (horde);
}