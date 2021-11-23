/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:58:20 by hgrissen          #+#    #+#             */
/*   Updated: 2021/11/23 22:23:17 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int    errors(int error)
{
    if (error == 1)
        std::cout << "Error : Arguments!!" << std::endl;
    else if (error == 2)
        std::cout << "ERROR : Strings" << std::endl;
    else if (error == 3)
        std::cout << "ERROR : File" << std::endl;
    return (1);
}

std::string replace(std::string line, std::string S1, std::string S2)
{
    size_t pos;
    

    pos = 0;
    while ((pos = line.find(S1)) !=  std::string::npos)
    {
        line = line.erase(pos, S1.length());
        line = line.insert(pos, S2);
    }
    return line;
}

int main(int ac, char **av)
{
     if (ac != 4)
        return (errors(1));
    else
    {
        std::string FILE = av[1];
        std::string S1 = av[2];
        std::string S2 = av[3];

        if (S1.empty() || S2.empty())
            return (errors(2));

        std::string line;
        std::ifstream ifile(FILE);
        std::ofstream ofile(FILE.append(".replace"));
        if (ifile == 0 || ofile == 0)
            return (errors(3));

        while (!ifile.eof())
        {
            getline(ifile, line);
            line = replace(line, S1, S2);
                ofile << line;
            if (!ifile.eof())
                ofile << std::endl;
        }        
    }
}