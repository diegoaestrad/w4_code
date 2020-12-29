/*	Student Name: Diego Alejandro Estrada Beltrán
*	Student Number: 200427048
*	Studet Mail: 200427046@student.georgianc.on.ca
*/
#pragma once
#include <iostream> 
#include <iomanip> 
#include <string> 
#include "Rectangle.h"

/*All the functions without body*/

class Rectangle
{
private:
	int height, width;
public:
	Rectangle(int, int);
	void set_height(int);
	int get_height() const;
	void set_width(int);
	int get_width() const;
	int get_perimeter() const;
	int get_area() const ;	
	~Rectangle();
	std::string to_str() const; 
};