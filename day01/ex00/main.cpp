/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 01:33:04 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 02:21:17 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    Zombie* heap;

    heap = newZombie("anass");
    heap->announce();

    Zombie  stack("sousou");
    stack.announce();
    randomChump("Nizar");

    delete(heap);

    return (0);
}