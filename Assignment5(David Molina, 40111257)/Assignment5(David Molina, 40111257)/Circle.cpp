//Circle.cpp
//@author: David Molina (40111257)
#include "pch.h"
#include "Circle.h"
#include <iostream>


Circle::Circle()
{
}

Circle::Circle(Point point, double r): p(point),radius(r)
{
}

void Circle::print()
{
	std::cout << "Circle: ";
	p.print();
	std::cout << radius;
	std::cout << " ";
}


double Circle::getRadius()const
{
	return radius;
}

Point Circle::getPoint() const
{
	return p;
}

std::string Circle::getClassName() const
{
	return className;
}

std::ostream &operator<< (std::ostream &os, Circle &c) {
	os << "Circle" << " " << c.getPoint().getX() << " " << c.getPoint().getY() << " " << c.getRadius()<<" ";
	return os;
}

Circle::~Circle()
{
}

