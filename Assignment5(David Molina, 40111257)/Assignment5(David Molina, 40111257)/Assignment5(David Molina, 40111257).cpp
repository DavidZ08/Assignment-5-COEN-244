//Assignment5(David Molina,40111257).cpp
//@author: David Molina (40111257)
#include "pch.h"
#include <iostream>
#include <fstream>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Point.h"
#include "Triangle.h"
#include <string>

int main()
{
	Point p1 = Point(4.1, 3.2);
	Point p2 = Point(9.3, 4.7);

	Line line = Line(p1, p2);

	Point p3 = Point(5.8, 7.3);
	Triangle triangle = Triangle(p1, p2, p3);

	Point p = Point(5.8, 7.3);
	Circle circle = Circle(p, 2.9);

	std::ofstream writer;

	//The file can be found in the file containing all the .cpp and .h files, more precisely, in the folder Assignment5(David Molina,40111257)
	writer.open("Assignment5.txt");
	if (writer.is_open())
	{
		writer << p1 << "\n";
		writer << p2 << "\n";
		writer << line << "\n";
		writer << p3 << "\n";
		writer << triangle << "\n";
		writer << p << "\n";
		writer << circle << "\n";
		writer.close();
	}
	else
	{
		std::cout << "An error occured." << std::endl;
	}

	std::ifstream reader;
	reader.open("Assignment5.txt");
	Shape* arr[7];
	int index=0;
	for (size_t i = 0; i < 7; i++)
	{
		arr[i] = nullptr;
	}
	if (reader.is_open())
	{
		while (!reader.eof())
		{
			std::string name;
			reader >> name;
			if (name == "Point")
			{
				double x;
				double y;
				reader >> x >> y;
				//std::cout <<"Point: "<< x <<", "<< y << std::endl;
				arr[index] = new Point(x, y);
				index++;
			}
			else if (name == "Line")
			{
				double x1;
				double y1;
				double x2;
				double y2;
				reader >> x1 >> y1 >> x2 >> y2;
				//std::cout << "Line: " << x1 << ", " << y1 <<", "<< x2 << ", " << y2 << std::endl;
				arr[index] = new Line(Point(x1, y1), Point(x2, y2));
				index++;
			}
			else if (name == "Triangle")
			{
				double x1;
				double y1;
				double x2;
				double y2;
				double x3;
				double y3;
				reader >> x1 >> y1 >> x2 >> y2>> x3 >> y3;
				//std::cout << "Triangle: " << x1 << ", " << y1 << ", " << x2 << ", " << y2 <<", "<< x3 <<", "<< y3 << std::endl;
				arr[index] = new Triangle(Point(x1, y1), Point(x2, y2), Point(x3, y3));
				index++;
			}
			else if (name == "Circle")
			{
				double x;
				double y;
				double radius;
				reader >> x >> y >> radius;
				//std::cout << "Circle: " << x << ", " << y << ", " << radius << std::endl;
				arr[index] = new Circle(Point(x, y), radius);
				index++;
			}
		}
	}
	else
	{
		std::cout << "File not found" << std::endl;
	}
	for (size_t i = 0; i < 7; i++)
	{
		arr[i]->print();
		std::cout << std::endl;
	}
	for (size_t i = 0; i < 7; i++)
	{
		delete arr[i];
		arr[i] = nullptr;
	}
}


