#include "Student3.hpp"


//wersja przy kompozycji
//Student::Student(std::string street, int houseNo)
//{
//		address.street = street;
//		address.houseNo = houseNo;
//}

Address::address (std::string street, int houseNo):
street (_street),
houseNo (_houseNo)
{
}


//Student::Student(Address address)
//{
//	this->address = address;
//}

Student::Student(Address& adress) : address(_address)
{

}
