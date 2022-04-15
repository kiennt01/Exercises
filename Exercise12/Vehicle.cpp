#include "Vehicle.h"

int Vehicle::getId()
{
    return id;
}
int Vehicle::getProdyear()
{
    return prodYear;
}
int Vehicle::getPrice()
{
    return price;
}
string Vehicle::getBrand()
{
    return brand;
}
string Vehicle::getColor()
{
    return color;
}
void Vehicle::setInfo()
{
    cout << "Enter ID: ";
    while (cin >> this->id && (this->id < 0))
    {
        cout << "Invalid id. Type again: ";
    }
    cout << "Enter brand: ";
    cin.ignore();
    getline(cin, this->brand);
    cout << "Enter production year: ";
    while (cin >> this->prodYear && (this->prodYear < 0))
    {
        cout << "Invalid production year. Type again: ";
    }
    cout << "Enter price: ";
    while (cin >> this->price && (this->price < 0))
    {
        cout << "Invalid price. Type again: ";
    }
    cout << "Enter color: ";
    cin.ignore();
    getline(cin, this->color);
}
void Vehicle::getInfo()
{
    cout << "ID: " << getId() << endl << "Brand: " << getBrand() << endl << "Production year: " << getProdyear() << endl;
    cout << "Price: " << getPrice() << endl << "Color: " << getColor() << endl;
}
