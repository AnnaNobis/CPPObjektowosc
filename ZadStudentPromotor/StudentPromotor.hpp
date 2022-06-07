#pragma once
#include <string>

//forward declaration - takie cos póxniej bedzie istniec
class Student;
class Promotor; //to jest nie potrzebne bo promotor zaraz bedzie zidentyfikoway

class Promotor
{
	Student& student;
	std::string name;

public:
	void setName(std::string name);
	void setStudent(Student& student);
	void receiveEmail(std::string emailCopy)


};

class Student
{
	Promotor* promotor = nullptr; //wskaznik czyli po prostu adres w pamieci
	std::string name;


public:
	void setName(std::string name);
	void setPromotor(Promotor* promotor);
	void sendEmailToPromotor();

};