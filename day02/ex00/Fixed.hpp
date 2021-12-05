/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgrissen <hgrissen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:12:31 by hgrissen          #+#    #+#             */
/*   Updated: 2021/12/03 00:20:49 by hgrissen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
    private:
        int     value;
        static  const int fracs;
    public:
        Fixed(void);
        Fixed(const Fixed &fixed);
        ~Fixed();
        Fixed & operator = (const Fixed &fixed);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif