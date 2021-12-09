/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 01:57:00 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/08 02:54:27 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
#include "Cat.hpp"
# include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;


    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the Dog sound!

    
    meta->makeSound();//will output the Animal sound!

    
}