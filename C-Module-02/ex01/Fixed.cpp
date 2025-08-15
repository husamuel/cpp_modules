/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:32:40 by lrocca            #+#    #+#             */
/*   Updated: 2021/11/11 20:33:15 by lrocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	value = n << fractionalBits;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	value = (int)roundf(n * (1 << fractionalBits));
}

Fixed&	Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		value = other.getRawBits();
	}
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return value;
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)value / (float)(1 << fractionalBits);
}

int	Fixed::toInt(void) const
{
	return (int)(value >> fractionalBits);
}

std::ostream&	operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}