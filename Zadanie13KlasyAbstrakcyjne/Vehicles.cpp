#include "Vehicles.hpp"

Vehicle::virtual ~Vehicle()
{
	delete[] lastDrives;
	std::cout << "destructor vehicle" << std::endl;
}

void Vehicle::drive()
{
}

Bus ::~Bus()
{

}