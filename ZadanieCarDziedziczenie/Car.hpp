#pragma once
#include <iostream>

class Car
{
public:
	Car() { std::cout << "Car constructor" << std::endl; }
	~Car(){std::cout << "Car destructor" << std::endl; }


};


class ElectricCar: public virtual Car
{
public:
	ElectricCar() { std::cout << "ElectricCar constructor" << std::endl; }
	~ElectricCar() { std::cout << "ElectricCar destructor" << std::endl; }
};

class AutoTransmisionCar : public virtual Car 
{
public:
	AutoTransmisionCar() { std::cout << "AutoTransmisionCar constructor" << std::endl; }
	~AutoTransmisionCar() { std::cout << "AutoTransmisionCar destructor" << std::endl; }
};

class Tesla :  public virtual Car
{
public:
	Tesla() { std::cout << "Tesla constructor" << std::endl; }
	~Tesla() { std::cout << "Tesla destructor" << std::endl; }

};
