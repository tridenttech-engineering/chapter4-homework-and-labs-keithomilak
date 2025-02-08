//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Keith Omilak> on <2/8/25>

#include <iostream>
#include <cmath>

int main()
{

  //declare and initialize variables
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;
  double pi = M_PI; //constant for pie in cmath library

  //Prompt user for height
  std::cout << "Please enter the height of the cylinder.\n";
  std::cin >> height;

  //prompt user for radius
  std::cout << "Please enter the radius of the cylinder.\n";
  std::cin >> radius;

  //calculate volume
  volume = pi * pow(radius, 2) * height;

  //display volume
  std::cout << "Volume of the cylinder: " << volume << std::endl;

  return 0;
}
//end of main function

