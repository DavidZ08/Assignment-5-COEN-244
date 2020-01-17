//Line.h
//@author: David Molina (40111257)
#pragma once
#include "Shape.h"
#include "Point.h"
#include <string>
#include <ostream>
class Line :
	public Shape
{
public:
	Line();
	virtual void print();
	Line(Point, Point);
	Point getPoint1()const;
	Point getPoint2()const;
	std::string getClassName()const;
	friend std::ostream &operator << (std::ostream&, Line&);
	~Line();
private:
	Point p1;
	Point p2;
	std::string className = "Line";
};

