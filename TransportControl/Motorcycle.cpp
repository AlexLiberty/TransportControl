#include "Motorcycle.h"

Transport* Motorcycle::clone()
{
    return new Motorcycle(*this);
}

void Motorcycle::printInfo()
{
    cout << "This is a motorcycle." << endl;
}
