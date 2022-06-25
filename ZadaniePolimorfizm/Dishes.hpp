#pragma once

class Dish
{
protected:
	int kcal;
public:
	Dish(int _kcal) : kcal(_kcal) {};
	virtual void eat();
	int getKcal() {return kcal;}

};

class Soup : public Dish
{
public:
	Soup(int _kcal) : Dish(_kcal) {}
	void eat() override;
};

class Main : public Dish
{
public:
	Main(int _kcal) : Dish(_kcal) {}
	void eat() override;
};