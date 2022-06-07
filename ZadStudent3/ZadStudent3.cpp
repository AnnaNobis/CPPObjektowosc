
#include <iostream>
#include <string>
#include "Student3.hpp"
#include "Student3public.hpp"

int mainDynamic()
{
   //kompozycja
  Student ania("Ulica", 10);
  
  //agregacja
  Address address("Ulica", 10);
  Student ania(address);
  Student zosia(address);
  // a gdyby by³a klasa: 
  /*
  Address address ("Ulica", 5);
  address
  */

}

int main()
{
    int main()
    {
        AddressStatic address;
        address.setStreet("Krolewska");
        address.setHouseNo(15);

        StudentStatic janNowak(address);
        StudentStatic alaNowak(address);

        std::cout << "Jan " << janNowak.getHouseNo() << std::endl;
        std::cout << "Ala " << alaNowak.getHouseNo() << std::endl;

        address.setHouseNo(25);
        std::cout << "Jan " << janNowak.getHouseNo() << std::endl;
        std::cout << "Ala " << alaNowak.getHouseNo() << std::endl;

        return 0;
    }


}