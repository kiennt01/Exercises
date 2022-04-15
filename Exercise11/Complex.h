#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
private:
    double real, image;
public:
    Complex();
    Complex(double, double);
    void addNumber();
    void printNumber();
    Complex plusNumber(Complex, Complex);
    Complex productNumber(Complex , Complex);
};

#endif // COMPLEX_H
