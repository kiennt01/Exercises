#include "Complex.h"

Complex::Complex()
{
    real = 0;
    image = 0;
}
Complex::Complex(double real, double image)
{
    this->real = real;
    this->image = image;
}
void Complex::addNumber()
{
    cout << "Enter real part: ";
    cin >> this -> real;
    cout << "Enter image part: ";
    cin >> this -> image;
}
void Complex::printNumber()
{
    if (image > 0)
    {
        cout <<  real << " + " << image << "i" << endl;
    }
    if (image < 0)
    {
        cout <<  real << " - " << abs(image) << "i" << endl;
    }
}
Complex Complex::plusNumber(Complex first, Complex second)
{
    Complex sum;
    sum.real = first.real + second.real;
    sum.image = first.image + second.image;
    return sum;
}
Complex Complex::productNumber(Complex first, Complex second)
{
    Complex product;
    product.real = first.real * second.real - first.image * second.image;
    product.image = first.real * second.image + second.real * first.image;
    return product;
}
