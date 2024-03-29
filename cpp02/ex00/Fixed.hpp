/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaplana <mlaplana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 16:21:25 by mlaplana          #+#    #+#             */
/*   Updated: 2020/07/07 16:22:59 by mlaplana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    private:
        int _fixed_point_value;
        static const int _fractionalBits = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &c);
        Fixed &operator=(const Fixed &c);

        int getRawBits() const;
        void setRawBits(const int raw);
};

#endif