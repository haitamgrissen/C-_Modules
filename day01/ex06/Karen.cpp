/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:00:18 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/23 21:28:21 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Karen.hpp"


/*       private member function          */
void   Karen::debug()
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void   Karen::info()
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void   Karen::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void   Karen::error()
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}



/*       public member functions         */

void    Karen::complainFilter(std::string level)
{
    int i = 0;
    std::string type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    func funcs[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    while (level != type[i] && i < 4)
        i++;
    switch (i)
    {
        case (0) :
                (this->*funcs[0])();
                (this->*funcs[1])();
                (this->*funcs[2])();
                (this->*funcs[3])();
            break;
        case (1) :
                (this->*funcs[1])();
                (this->*funcs[2])();
                (this->*funcs[3])();
            break;
        case (2) :
                (this->*funcs[2])();
                (this->*funcs[3])();
            break;
        case (3) :
                (this->*funcs[3])();
                break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    
}