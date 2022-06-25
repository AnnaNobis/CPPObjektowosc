//4.3.Zaimplementuj klasê samochód(Car), która bêdzie mia³a klasê wewnêtrzn¹ obs³uguj¹c¹ silnik(Engine) :
	//• silnik ma pojemnoœæ i typ(Diesel, Petrol)
	//• w silniku mo¿na wymieniæ olej
	//• samochód przechodzi coroczny serwis


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
