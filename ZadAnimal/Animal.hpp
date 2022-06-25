#pragma once
#include <iostream>

class Animal
{
	std::string name;
public:
	
	//Animal (std::string _name):name(_name)
	Animal () { std::cout << "Animal constructor" << std::endl; }
	~Animal() { std::cout << "Animal destructor" << std::endl; }
	std::string getName() { return name; }
	void roar() { std::cout << "Animal roars" << std::endl; }
	void sleep() { std::cout << "Animal sleeps" << std::endl; }
};

class Lion : public Animal
{
public:
	Lion();
	void roar() {	std::cout << "Lion roars" << std::endl;	}
	void feast() { std::cout << "Lion feasts" << std::endl; }
};

class Mammal :public Animal
{
public:
//	Mammal(std::string _name) :Animal(_name)
	Mammal() { std::cout << "Mammal constructor" << std::endl; }
	~Mammal() { std::cout << "Mammal destructor" << std::endl; }
};

class Dog : public Mammal
{
public:
//Dog (std::string _name):Mammal(_name)
Dog() { std::cout << "Dog constructor" << std::endl; }
~Dog() { std::cout << "Dog destructor" << std::endl; }
//Dog() :Dog("Reksio") {std::cout << "Dog contructor bezparam" << std::endl;}
};

class Cat :public Mammal
{
public:
Cat() { std::cout << "Cat constructor" << std::endl; }
	~Cat() { std::cout << "Cat destructor" << std::endl; }
};