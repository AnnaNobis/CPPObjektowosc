#pragma once

class Point2D
{
	int x=0, y=0;
	
public:
	Point2D(int px, int py);
	

	int getX();
	int getY();
};

class Point3D : public Point2D
{
	int z;
public:
	Point3D(int ppx, int ppy, int ppz): Point2D(ppx,ppy), z(ppz){}
};