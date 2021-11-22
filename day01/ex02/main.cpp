/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:04:16 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/21 18:06:16 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string st = "HI THIS IS BRAIN";
    std::string* stringPTR = &st;
    std::string& stringREF = st;

    std::cout << "string ADDRESS    : " << &st << std::endl;
    std::cout << "pointer ADDRESS   : " << stringPTR << std::endl;
    std::cout << "referncer ADDRESS : " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "string String     : " << st << std::endl;
    std::cout << "pointer String    : " << *stringPTR << std::endl;
    std::cout << "referncer String  : " << stringREF << std::endl;


}