/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:12:23 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/03 19:48:16 by hgrissen         ###   ########.fr       */
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

Fixed::Fixed( int const fixed)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(fixed * (1 << Fixed::fracs));
}

Fixed::Fixed( float const fixed)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(fixed * (1 << Fixed::fracs)));
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=( Fixed const & fixed)
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

void	Fixed::setRawBits( int const val )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = val;
}

std::ostream &			operator<<( std::ostream & out, Fixed const & fixed )
{
	out << fixed.toFloat();
	return (out);
}

float	Fixed::toFloat( void ) const
{
	return ((float)getRawBits() / (float)(1 << Fixed::fracs));
}

int		Fixed::toInt( void ) const
{
	return ((int)(getRawBits() / (1 << Fixed::fracs)));
}
