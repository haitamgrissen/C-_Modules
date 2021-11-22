/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:52:30 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 17:02:42 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main(int ac, char **av)
{
    Zombie* the_Horde;

    if (ac != 2)
        return (1);
    the_Horde = zombieHorde(10, av[1]);
    for (int i = 0; i < 10; i++)
    {
      the_Horde[i].announce();
    }
    std::cout << std::endl;
    delete[] the_Horde;
}