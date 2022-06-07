#include "Student.hpp"

Student::Student(int noOfGrades)
{
	//tworzymy dynamiczne tablice o dlugosci noOfGrades
	//przypisujemt wskaznik na poczatek tej tablicy do pola grades
	grades = new int[noOfGrades];
	this->noOfGrades = noOfGrades;

}

Student::~Student()
{ //w tym konkretnym przypadku konstruktor wykona siê zawsze
	//ale to dobra praktyka  by sprawdzic czy usuwajac wskaznik ..
	if (grades != nullptr)
	{
		delete[] grades;
	}
}

void Student::addGrade(int grade)
{
	if (index < noOfGrades) // sprawdzamy czy piszemy poza tablica
	{
		grades[index] = grade;
		index++;

	}
}

double Student::average()
{
	double sum = 0;
		for (int i = 0; i < noOfGrades; ++i)
		{
			sum += grades[i];
		}
	return sum / noOfGrades;
	
}
