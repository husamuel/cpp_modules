/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:32:38 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/11 18:11:09 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int			value;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &other);
		Fixed(int const n);
		Fixed(float const n);
		Fixed&	operator=(Fixed const &other);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);

#endif