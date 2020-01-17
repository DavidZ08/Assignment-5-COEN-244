//Triangle.h
//@author: David Molina (40111257)
#pragma once
#include "Shape.h"
#include "Point.h"
#include <string>
#include <ostream>
class Triangle :
	public Shape
{
public:
	Triangle();
	Triangle(Point, Point, Point);
	virtual void print();
	Point getPoint1()const;
	Point getPoint2()const;
	Point getPoint3()const;
	std::string getClassName()const;
	friend std::ostream &operator<<(std::ostream&, Triangle&);
	~Triangle();
private:
	Point p1;
	Point p2;
	Point p3;
	std::string className = "Triangle";
};

