#pragma once
#include "Transport.h"

class Bus: public Transport
{
public:
	Transport* clone() override;
	void printInfo() override;
};

