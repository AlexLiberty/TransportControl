#pragma once
#include "Transport.h"

class Motorcycle:public Transport
{
public:
	Transport* clone() override;
	void printInfo() override;
};

