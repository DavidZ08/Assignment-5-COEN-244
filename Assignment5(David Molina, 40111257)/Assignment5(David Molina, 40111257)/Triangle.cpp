//Triangle.cpp
//@author: David Molina (40111257)
#include "pch.h"
#include "Triangle.h"
#include <iostream>


Triangle::Triangle()
{
}

Triangle::Triangle(Point point1, Point point2, Point point3): p1(point1),p2(point2),p3(point3)
{
}

void Triangle::print()
{
	std::cout << "Triangle: ";
	p1.print();
	p2.print();
	p3.print();
	std::cout << " ";
}

Point Triangle::getPoint1() const
{
	return p1;
}

Point Triangle::getPoint2() const
{
	return p2;
}

Point Triangle::getPoint3() const
{
	return p3;
}

std::string Triangle::getClassName() const
{
	return className;
}

std::ostream &operator<< (std::ostream &os, Triangle &t) {
	os <<"Triangle"<<" "<< t.getPoint1().getX() << " " << t.getPoint1().getY() << " " << t.getPoint2().getX() << " " << t.getPoint2().getY() << " " << t.getPoint3().getX() << " " << t.getPoint3().getY() << " ";
	return os;
}


Triangle::~Triangle()
{
}
