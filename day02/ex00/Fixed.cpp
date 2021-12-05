/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:12:23 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/03 00:26:05 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const & fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator=(fixed);
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&				Fixed::operator=( Fixed const & fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &fixed )
		this->value = fixed.getRawBits();
	return *this;
}


int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
