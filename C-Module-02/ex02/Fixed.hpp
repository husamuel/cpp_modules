#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int value;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int n);
        Fixed(const float n);
        ~Fixed();
        Fixed &operator=(const Fixed &other);

        int getRawBits(void) const;
        void setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator> (Fixed const &other) const;
		bool	operator< (Fixed const &other) const;
		bool	operator>=(Fixed const &other) const;
		bool	operator<=(Fixed const &other) const;
		bool	operator==(Fixed const &other) const;
		bool	operator!=(Fixed const &other) const;

		Fixed	operator+(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;
		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;

		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		const static Fixed	&min(Fixed const &a, Fixed const &b);
		const static Fixed	&max(Fixed const &a, Fixed const &b);
};

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed);

#endif