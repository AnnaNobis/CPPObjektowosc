
#include <iostream>
#include "Vehicles.hpp"

int main()
{
  //  Vehicle v; to si� nie kompiluje - DLACZEGO?
    Vehicle* v = new Bus();
    v->drive();
    delete v;

    return 0;
}
