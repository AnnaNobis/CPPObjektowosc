#include "StudentPromotor.hpp"

void Student::setName(std::string name)
{
	this->name = name;
}

void Student::setPromotor(Promotor* promotor)
{
	this->promotor = promotor;
}

void Promotor::setName(std::string name)
{
	this->name = name;
}

void Promotor::setStudent(Student& student)
{
}

void Promotor(Student student)
{
	this->student = student;
}
