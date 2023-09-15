#include "Bus.h"

Transport* Bus::clone()
{
    return new Bus(*this);
}

void Bus::printInfo()
{
    cout << "This is a bus." << endl;
}
