
#include <iostream>
#include "Point.hpp"



Point2D::Point2D(int px, int py) : x(px), y(py) {} //lista inicjalizujaca
Point3D::Point3D(int ppx, int ppy, int ppz) : Point2D(ppx, ppy), z(ppz) {} //lista inicjalizujaca

int Point2D::getX()
{
    return x;
}

int Point2D::getY()
{
    return y;
}
int Point3D::getZ()
{
    return z;
}


int main()
{
    class Point2D;
    class Point3D;

  /*  std::cout <<Point3D.getX() << "X pochodzi z Point2D" << std::endl;
    std::cout << Point3D.getY() << "Y pochodzi z Point2D" << std::endl;
    std::cout << Point3D.getZ() << "Z pochodzi z Point3D" << std::endl;*/

}

