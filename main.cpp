/*	Student Name: Diego Alejandro Estrada Beltrán
*	Student Number: 200427048
*	Studet Mail: 200427046@student.georgianc.on.ca
*/

#include <iostream> 
#include <iomanip> 
#include <string> 
#include "Rectangle.h"

using namespace std;

int main() {
	cout << "Rectangle Calculator\n\n";
	char another = 'y';
	while (tolower(another) == 'y') {
		int height;
		cout << "Height: "; 
		cin >> height;
		int width;
		cout << "Width: "; 
		cin >> width;
		Rectangle rectangle(height, width);
		cout << "Perimeter: " << rectangle.get_perimeter() << endl; 
		cout << "Area: " << rectangle.get_area() << endl;
		cout << rectangle.to_str();
		cout << "\nContinue? (y/n): "; cin >> another;
		cin.ignore();
		cout << endl;
	}
	cout << "Bye!\n\n";
}