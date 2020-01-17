//Line.cpp
//@author: David Molina (40111257)
#include "pch.h"
#include "Line.h"
#include<iostream>


Line::Line()
{
}

void Line::print()
{
	std::cout << "Line: ";
	p1.print();
	p2.print();
	std::cout << " ";
}


Line::Line(Point point1, Point point2):p1(point1),p2(point2)
{
}

Point Line::getPoint1() const
{
	return p1;
}

Point Line::getPoint2() const
{
	return p2;
}

std::string Line::getClassName() const
{
	return className;
}

std::ostream &operator << (std::ostream& os, Line& l) {
	os <<"Line"<<" "<<l.getPoint1().getX() << " " << l.getPoint1().getY() << " " << l.getPoint2().getX() << " " << l.getPoint2().getY() << " ";
	return os;
}

Line::~Line()
{
}

