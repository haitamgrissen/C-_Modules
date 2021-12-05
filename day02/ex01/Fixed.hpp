/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:12:31 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/03 19:25:42 by hgrissen         ###   ########.fr       */
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
        
        Fixed & operator = (const Fixed &fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        // converter
        float	toFloat( void ) const;
		int		toInt( void ) const;
};
std::ostream &			operator<<( std::ostream & oot, Fixed const & fixed);
#endif