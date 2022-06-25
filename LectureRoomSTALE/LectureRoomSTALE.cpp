#include <iostream>
#include <string>
#include "Const.hpp"

int main()
{
    const LectureRoom roomA(15);
    LectureRoom roomB(30);
    roomB = roomA; //dziala
   // roomA = roomB; - nie dziala
    return 0;
    

   //const int a = 15;
   // int b = 25;
   // a = b; //z const nie dziala
   // b = a;
   // return 0;

    std::cout << roomB.getSize() << std::endl;
    std::cout << roomB.getSize() << std::endl;
}