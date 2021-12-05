/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 23:48:17 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/06 00:40:00 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"


/*
	Constructors And destructor
*/


			Fixed::Fixed()
			{
				this->value = 0;
			}

			Fixed::Fixed(Fixed const & fixed)
			{
				this->operator=(fixed);
			}

			Fixed::Fixed(const float val)
			{
				this->setRawBits(roundf(val * (1 << Fixed::fracs)));
			}

			Fixed::Fixed(const int val)
			{
				this->setRawBits(val * (1 << Fixed::fracs));
			}

			Fixed::~Fixed()
			{
			}

/*
	Getter and Setter
*/

			int		Fixed::getRawBits( void ) const
			{
				return this->value;
			}

			void	Fixed::setRawBits( int const val )
			{
				this->value = val;
			}

/*
	Assign Operator
*/

			Fixed&	Fixed::operator=( Fixed const & fixed)
			{
				if ( this != &fixed )
					this->value = fixed.getRawBits();
				return *this;
			}

/*
	OStream Operator
*/

			std::ostream &			operator<<( std::ostream & out, Fixed const & fixed )
			{
				out << fixed.toFloat();
				return (out);
			}

/*
	Converters
*/

			float	Fixed::toFloat( void ) const
			{
				return ((float)getRawBits() / (float)(1 << Fixed::fracs));
			}

			int		Fixed::toInt( void ) const
			{
				return ((int)(getRawBits() / (1 << Fixed::fracs)));
			}

/*
  comparison Opertors
*/


			bool		Fixed::operator>( Fixed const & fixed )
			{
				return (this->toFloat() > fixed.toFloat());
			}

			bool		Fixed::operator<( Fixed const & fixed )
			{
				return (this->toFloat() < fixed.toFloat());
			}

			bool		Fixed::operator<=( Fixed const & fixed )
			{
				return (this->toFloat() <= fixed.toFloat());
			}

			bool		Fixed::operator>=( Fixed const & fixed )
			{
				return (this->toFloat() >= fixed.toFloat());
			}

			bool		Fixed::operator==( Fixed const & fixed )
			{
				return (this->toFloat() == fixed.toFloat());
			}

			bool		Fixed::operator!=( Fixed const & fixed )
			{
				return (this->toFloat() != fixed.toFloat());
			}

/*
	Increments and Decrements
*/

			Fixed &		Fixed::operator++()
			{
				this->value++;
				return *this;
			}

			Fixed		Fixed::operator++( int )
			{
				Fixed tmp = *this;
				++*this;
				return (tmp);
			}

			Fixed &		Fixed::operator--()
			{
				this->value--;
				return *this;
			}

			Fixed		Fixed::operator--( int )
			{
				Fixed tmp = *this;
				--*this;
				return (tmp);
			}

/*
	Arithmetic
*/

			Fixed &		Fixed::operator+( Fixed const & fixed )
			{
				this->value = ((this->toFloat() + fixed.toFloat()) * (1 << this->fracs));
				return *this;
			}

			Fixed &		Fixed::operator-( Fixed const & fixed )
			{
				this->value = ((this->toFloat() - fixed.toFloat()) * (1 << this->fracs));
				return *this;
			}

			Fixed &		Fixed::operator*( Fixed const & fixed )
			{
				this->value = ((this->toFloat() * fixed.toFloat()) * (1 << this->fracs));
				return *this;
			}

			Fixed &		Fixed::operator/( Fixed const & fixed )
			{
				this->value = ((this->toFloat() / fixed.toFloat()) * (1 << this->fracs));
				return *this;
			}

/*
	MIN MAX
*/

			Fixed &	Fixed::max( Fixed& val1, Fixed& val2 )
			{
				if (val1.toFloat() < val2.toFloat())
					return val2;
				return val1;
			}

			const Fixed  &	Fixed::max( const Fixed& val1, const Fixed& val2 )
			{
				if (val1.toFloat() < val2.toFloat())
					return val2;
				return val1;
			}

			Fixed &	Fixed::min( Fixed& val1, Fixed& val2 )
			{
				if (val1.toFloat() < val2.toFloat())
					return val1;
				return val2;
			}

			const Fixed &	Fixed::min( const Fixed& val1, const Fixed& val2 )
			{
				if (val1.toFloat() < val2.toFloat())
					return val1;
				return val2;
			}

