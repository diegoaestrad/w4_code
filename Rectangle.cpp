/*	Student Name: Diego Alejandro Estrada Beltrán
*	Student Number: 200427048
*	Studet Mail: 200427046@student.georgianc.on.ca
*/
#include "Rectangle.h"
#include <iostream>
#include <iomanip> 
#include <string> 

using namespace std;

/*Constructor With two variables*/
Rectangle::Rectangle(int h, int w) {
    if (h > 1)
    {
        height = h;
    }
    if (w > 1)
    {
        width = w;
    }
}

/*Initialize the height with the value that receive in the h*/
void Rectangle::set_height(int h) {
    height = h;
};

/*Return the height*/
int Rectangle::get_height() const {
    return height;
};

/*Initialize the width with the value that receive in the w*/
void Rectangle::set_width(int w) {
    width = w;
};

/*Return width - get*/
int Rectangle::get_width() const {
    return width;
};

/*This function returns the perimeter value according to the values inserted by the user*/
int Rectangle::get_perimeter() const {
    return (2*(height+width));
};

/*This function returns the area of the rectangle according to the values inserted by the user*/
int Rectangle::get_area() const {
    return (height * width);
};

/*The function that drawas the rectangle in the screen*/
string Rectangle::to_str() const {
    // create horizontal line for width
    string w = "";
    for (int i = 0; i < width; ++i) {
        w += "* ";
    }
    w += '\n';
    // create horizontal line for height
    string h = "";
    for (int i = 0; i < width; ++i) {
        if (i == 0 || i == width - 1) {
            h += "* ";
        }
        else
        {
            h += "  ";
        }
    }
    h += '\n';
    // create complete string
    string s = "";
    s += w;
    for (int i = 0; i < height - 2; ++i) {
        s += h;
    }
    s += w; 
    return s;
}

/* Destructor*/
Rectangle::~Rectangle() {};