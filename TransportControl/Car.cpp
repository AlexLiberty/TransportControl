#include "Car.h"

Transport* Car::clone()
{
    return new Car(*this);
}

void Car::printInfo()
{
    cout << "This is a car." << endl;
}
