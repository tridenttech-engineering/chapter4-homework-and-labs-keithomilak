//Lab4-6.cpp - displays the area of a triangle
//Created/revised by <Keith Omilak> on <2/8/25>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	double base = 11.0;
	double height = 13.0;
	double area = 0.0;

	//calculate and display area
	area = base * height / 2;
	cout << "Area: " << area << endl;

	return 0;
}	//end of main function