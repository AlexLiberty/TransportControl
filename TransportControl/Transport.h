#pragma once
#include<iostream>
#include<string>

using namespace std;

class Transport abstract
{
protected:
	string type;
	string model;
	int year;
public:
	Transport() :type(type), model(model), year(year) {};
	virtual Transport* clone() = 0;
	virtual void printInfo() = 0;
};

