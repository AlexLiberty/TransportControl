#include "Transport.h"
#include "Car.h"
#include "Bus.h"
#include "Motorcycle.h"

int main() 
{
	Transport* car = new Car();
	Transport* bus = new Bus();
	Transport* motorcycle = new Motorcycle();

	Transport* car2 = car->clone();
	Transport* bus2 = bus->clone();
	Transport* motorcycle2 = motorcycle->clone();

	car2->printInfo();
	bus2->printInfo();
	motorcycle2->printInfo();

	delete 
		car, car2, bus,bus2, motorcycle, motorcycle2;
}