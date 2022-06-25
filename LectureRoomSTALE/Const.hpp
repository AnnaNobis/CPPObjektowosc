#pragma once
#include <string>

class LectureRoom
{
	int size = 15;
	const int floor;
public:
	LectureRoom(int _size) : size(_size), floor (_size/10) {}; //uzywamy _ zeby rozrozniæ te 2 zmienne bo nie mo¿emy u¿yæ this
	//LectureRoom (int _size)
	//{
	//	this->size = _size;
	//}

	static const std::string patronage;
	int getSize;
};