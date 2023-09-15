#pragma once
#include "Transport.h"

class Car:public Transport
{
public:
	Transport* clone() override;
	void printInfo() override;
};

