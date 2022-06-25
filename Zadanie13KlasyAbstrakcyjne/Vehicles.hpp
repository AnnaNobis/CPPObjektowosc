#pragma once
#include <iostream>

class Vehicle
{

public:

	virtual	~Vehicle();
		virtual void drive() = 0;
};

class Bus : public Vehicle
{
protected:
	int* lastDrives;
public:
	~Bus();
	void drive() override
	{
		std::cout << "Bus drives" << std::endl;
		
	}

};


class Bicycle : public Vehicle
{
public:
	
	void drive() override
	{
		std::cout << "Bicycle drives" << std::endl;

	};
};