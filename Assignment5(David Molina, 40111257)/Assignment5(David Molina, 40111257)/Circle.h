//Circle.h
//@author: David Molina (40111257)
#pragma once
#include "Shape.h"
#include "Point.h"
#include <string>
#include <ostream>
class Circle :
	public Shape
{
public:
	Circle();
	Circle(Point, double);
	virtual void print();
	double getRadius() const;
	Point getPoint() const;
	std::string getClassName()const;
	friend std::ostream &operator<< (std::ostream&, Circle&);
	~Circle();
private:
	Point p;
	double radius;
	std::string className = "Circle";
};

