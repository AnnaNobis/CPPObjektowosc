
#include <iostream>
#include "Vehicles.hpp"

int main()
{
  //  Vehicle v; to siê nie kompiluje - DLACZEGO?
    Vehicle* v = new Bus();
    v->drive();
    delete v;

    return 0;
}
