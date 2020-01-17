//Point.h
//@author: David Molina (40111257)
#pragma once
#include "Shape.h"
#include <string>
#include <ostream>
class Point :
	public Shape
{
public:
	Point();
	virtual void print();
	Point(double, double);
	double getX() const;
	double getY() const;
	std::string getClassName()const;
	friend std::ostream &operator<<(std::ostream&, Point&);
	~Point();
private:
	double x_coor;
	double y_coor;
	std::string className = "Point";
};

