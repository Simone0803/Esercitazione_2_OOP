#include <iostream>
#include <fstream>
#include "complex_numbers.hpp"

int main()
{
double a = 15.6;
double b = -14.3;
double c = 13.7;
complex_numbers<float> x(a,b);
complex_numbers<float> y(a,c);
complex_numbers<float> z=x.conjugated();
std::cout << "il numero complesso con parte reale " << a << " e parte immaginaria " << b << " è " << x << std::endl;
std::cout << "il coniugato di " << x << " è " << z << std::endl;
std::cout << "la somma tra il  numero complesso " << z << " e " << x << " è " << (z+x) << std::endl;
std::cout << "la moltiplicazione tra il  numero complesso " << y << " e il numero complesso " << x << " è " << (y*x) << std::endl;
std::cout << "la somma tra il  numero complesso " << z << " e il numero  " << a << " è " << (z+a) << std::endl;
std::cout << "la moltiplicazione tra il  numero complesso " << z << " e il numero  " << a << " è " << (z*a) << std::endl;
return 0;
}
