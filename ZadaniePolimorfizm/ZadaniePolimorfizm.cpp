
#include <iostream>
#include "Dishes.hpp"

bool handleInput()
{
    std::string operation;
    std::cin >> operation;
    if (operation == "dosc")
    {
        return false;
    }
    else if (operation == "eat")
    {
        dish->eat();

        std::cout << "Kcal" << dish->getKcal() << std::endl;
        return true;
    }
}

Dish* createDish(int select)
{
    Dish* dish;
  if (select == 1)
        {
            dish = new Soup(200);
        }
    else 
        {
      dish = new Main(500); 
  }
  return dish;
}

int main()
{
    int select;
    std::cout << " What would you like to order: 1. Soup, 2. Main?" << std::endl;
    std::cin >> select;
    Dish* dish = createDish(select);
   
      
        std::cout << "Kcal:" << dish->getKcal() << std::endl;

        bool state = true;
        do
        {
            state handleInput(dish);

        }
        while (state && dish->getKcal() > 0);
        std::cout << "Kcal" << dish->getKcal() << std::endl;
        delete dish;

    return 0;
}

