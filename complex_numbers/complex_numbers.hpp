#pragma once
#include <iostream>
#include <fstream>

template<typename I> requires std::floating_point<I>
class complex_numbers
{
	I real_part,imaginary_part;
	
public:
    complex_numbers()
		:real_part(0),imaginary_part(0)
    {}
	
   complex_numbers(I n, I m) 
		: real_part(n), imaginary_part(m) 
	{}
    
    I real(void) const {
        return real_part;
    }
    
    I imaginary(void) const {
        return imaginary_part;
    }
	
	complex_numbers conjugated (void) const 
	{
		return complex_numbers(real_part,-imaginary_part);
	}
    
    complex_numbers& operator+=(const complex_numbers& other) {
        I a = real_part;
        I b = imaginary_part;
        I c = other.real_part;
        I d = other.imaginary_part;
		real_part= a+c;
		imaginary_part= b+d;
        return *this;
	}
	
	complex_numbers operator+(const complex_numbers& other) const {
        complex_numbers ret = *this;
        ret += other;
        return ret;
    }

     complex_numbers& operator+=(const I& other) {
        real_part += other;
        return *this;
	}
	
	complex_numbers operator+(const I& other) const {
        complex_numbers ret = *this;
        ret += other;
        return ret;
    }
	complex_numbers& operator*=(const complex_numbers& other) {
        I a = real_part;
        I b = imaginary_part;
        I c = other.real_part;
        I d = other.imaginary_part;
		real_part= a*c-b*d;
		imaginary_part= a*d+b*c;
        return *this;
	}
	
	complex_numbers operator*(const complex_numbers& other) const {
        complex_numbers ret = *this;
        ret *= other;
        return ret;
    }

     complex_numbers& operator*=(const I& other) {
        real_part *= other;
		imaginary_part *= other;
        return *this;
	}
	
	complex_numbers operator*(const I& other) const {
        complex_numbers ret = *this;
        ret *= other;
        return ret;
	}
};

template<typename I>
	complex_numbers<I>
	operator+(const I& i, const complex_numbers<I>& c)
	{
		return c+i;
	}
	template<typename I>
	complex_numbers<I>
	operator*(const I& i, const complex_numbers<I>& c)
	{
		return c*i;
	}

template<typename I>
	std::ostream& operator<<(std::ostream& os, const complex_numbers<I>& c) {
    if (c.imaginary() >= 0)
        os << c.real() << "+" << c.imaginary() << "i";
    else
        os << c.real() << c.imaginary() << "i";

    return os;
	}


