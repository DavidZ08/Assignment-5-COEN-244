//Point.cpp
//@author: David Molina (40111257)
#include "pch.h"
#include "Point.h"
#include <iostream>


Point::Point()
{
}

void Point::print()
{
	std::cout << "Point: " << x_coor << ", " << y_coor<<" ";
}


Point::Point(double x, double y):x_coor(x),y_coor(y)
{
}

double Point::getX()const
{
	return x_coor;
}

double Point::getY()const
{
	return y_coor;
}

std::string Point::getClassName() const
{
	return className;
}

std::ostream &operator<<(std::ostream& os, Point& p) {
	os <<p.className<<" "<<p.x_coor << " " << p.y_coor << " ";
	return os;
}

Point::~Point()
{
}
