/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 01:33:04 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 02:11:32 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
    Zombie* heap;

    heap = newZombie("anass");
    heap->announce();
    delete(heap);
    randomChump("Nizar");

    Zombie  stack("sousou");
    stack.announce();
    

    return (0);
}