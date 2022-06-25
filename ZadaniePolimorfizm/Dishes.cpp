#include "Dishes.hpp"
#include <iostream>

void Soup::eat() 
{
	kcal -= 50 ;
	std::cout << "I'm eating (soup)" << std::endl;
	
}

void Main::eat()
{
	kcal-= 100;
	std::cout << "I'm eating (main)" << std::endl;
}

void Dish::eat()
{
	kcal -= 10;
	std::cout << "I'm eating (dish)" << std::endl;
}
