#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::Fixed(const int n)
{
    value = n << fractionalBits;
}

Fixed::Fixed(const float n)
{
    value = (int)roundf(n * (1 << fractionalBits));
}

Fixed::~Fixed()
{

}

int Fixed::getRawBits(void) const
{
    return value;
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

int Fixed::toInt(void) const
{
    return value >> fractionalBits;
}

float Fixed::toFloat(void) const
{
    return (float)value / (float)(1 << fractionalBits);
}

bool Fixed::operator>(Fixed const &other) const
{
    return value > other.getRawBits();
}

bool Fixed::operator<(Fixed const &other) const
{
    return value < other.getRawBits();
}

bool Fixed::operator>=(Fixed const &other) const
{
    return value >= other.getRawBits();
}

bool Fixed::operator<=(Fixed const &other) const
{
    return value <= other.getRawBits();
}

bool Fixed::operator==(Fixed const &other) const
{
    return value == other.getRawBits();
}

Fixed Fixed::operator+(Fixed const &other) const
{
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(Fixed const &other) const
{
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(Fixed const &other) const
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(Fixed const &other) const
{
    return Fixed(toFloat() / other.toFloat());
}

Fixed &Fixed::operator++()
{
    value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if(a < b)
        return a;
    return b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if(a > b)
        return a;
    return b;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << fixed.toFloat();
    return o;
}

Fixed &Fixed::operator=(Fixed const &other)
{
    if (this != &other)
    {
        value = other.getRawBits();
    }
    return *this;
}

const Fixed &min(Fixed const &a, Fixed const &b) {
	return Fixed::min(a, b);
}

const Fixed &max(Fixed const &a, Fixed const &b) {
	return Fixed::max(a, b);
}