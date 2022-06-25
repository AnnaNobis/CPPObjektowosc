
#include <iostream>
#include "Animal.hpp"

void foo()
{
    std::cout << std::endl;
    std::cout << "metoda" << std::endl;
    Cat cat;
    std::cout << "koniec metody" << std::endl;
    std::cout << std::endl;
}



int constructorChains()
{
    Dog dog;
    std::cout << std::endl;
    foo();
    std::cout << std::endl;
    return 0;
}

int main()
{
    Lion* lion = new Lion();
    lion->feast();
    lion->roar();
    lion->sleep();

    Animal* animal = new Lion();
    animal->sleep();
    animal->roar();
   

    delete lion;
    delete animal;
}