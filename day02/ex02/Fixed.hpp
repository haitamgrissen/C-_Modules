/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:12:31 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/06 00:04:56 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int     value;
        static  const int fracs = 8;
    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        Fixed(const float val);
        Fixed(const int val);
        ~Fixed();
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        Fixed & operator= (const Fixed &fixed);
        // converter
        float	toFloat( void ) const;
		int		toInt( void ) const;
        //comparison Opertors
        bool    operator>(Fixed const & fixed);
        bool    operator>=(Fixed const & fixed);
        bool    operator<(Fixed const & fixed);
        bool    operator<=(Fixed const & fixed);
        bool    operator==(Fixed const & fixed);
        bool    operator!=(Fixed const & fixed);
        //incriment decriment operators
        Fixed&    operator++();
        Fixed    operator++(int);
        Fixed&    operator--();
        Fixed    operator--(int);
        //arthmetic operators
        Fixed&    operator+(Fixed const & fixed);
        Fixed&    operator-(Fixed const & fixed);
        Fixed&    operator*(Fixed const & fixed);
        Fixed&    operator/(Fixed const & fixed);
        //Min Max
		static Fixed &	        max( Fixed& val1, Fixed& val2 );
		static const Fixed &	max( const Fixed& val1, const Fixed& val2 );
        static Fixed &	        min( Fixed& val1, Fixed& val2 );
		static const Fixed &	min( const Fixed& val1, const Fixed& val2 );
        
};

std::ostream &			operator<<( std::ostream & oot, Fixed const & fixed);

#endif