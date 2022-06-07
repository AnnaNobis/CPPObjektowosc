#pragma once

class Student
{
	int* grades;
	int noOfGrades = 0;


public:
	Student(int noOfGrades);
	~Student();
	void addGrade(int grade);
	double average();



};