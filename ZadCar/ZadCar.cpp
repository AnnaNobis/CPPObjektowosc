//4.3.Zaimplementuj klas� samoch�d(Car), kt�ra b�dzie mia�a klas� wewn�trzn� obs�uguj�c� silnik(Engine) :
	//� silnik ma pojemno�� i typ(Diesel, Petrol)
	//� w silniku mo�na wymieni� olej
	//� samoch�d przechodzi coroczny serwis


#include <iostream>
#include "Car.hpp"

int main()
{
	Car audi(EngineType::Petrol, 1.78);
	Car opel(EngineType::Diesel, 1.2);
	Car hyundai(EngineType::Petrol, 1.46);
	//audi.oilChange();
	//audi.annualService();
	std::cout << audi.getVIN() << std::endl;
	std::cout << opel.getVIN() << std::endl;
	std::cout << hyundai.getVIN() << std::endl;
	std::cout << audi.location() << std::endl;
	std::cout << opel.location() << std::endl;
	std::cout << hyundai.location() << std::endl;
}
