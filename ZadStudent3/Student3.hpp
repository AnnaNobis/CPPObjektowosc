#pragma once
#include <string>

//class Address
//{
//public:
//	std::string street;
//	int houseNo;
//};

	struct Address // poniewa� nie by�o metod i wszystkie pola by�y publiczne to zamieniamy class na struct
	{
		std::string street;
		int houseNo;
		Address(std::string street, int houseNo);
		void setHouseNo (int houseNo);
	};



class Student
{
Address& address;

public:
	Student(Address& address);

}