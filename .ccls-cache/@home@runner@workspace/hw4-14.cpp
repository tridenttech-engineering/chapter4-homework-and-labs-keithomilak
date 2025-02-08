// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Keith Omilak> on <2/8/25>

#include <iostream>
using namespace std;

int main() 
{
  //declare named constants and variables
  int smallSize = 0;
  int mediumSize = 0;
  int largeSize = 0;
  int familySize = 0;
  int totalSold = 0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  //enter input items
  cout << "Enter the number of small pizzas sold\n";
  cin >> smallSize;
  cout << "Enter the number of medium pizzas sold\n";
  cin >> mediumSize;
  cout << "Enter the number of large pizzas sold\n";
  cin >> largeSize;;
  cout << "Enter the number of family pizzas sold\n";
  cin >> familySize;

  /*calculate total sold and percentages 
  
    we use static_cast<double>(smallSize) to externally adjust memory type because we are only using integers for the calculation,       and the system will internally demote memory type from double to int otherwise in attempt to conserve memory*/
  totalSold = smallSize + mediumSize + largeSize + familySize;
  smallPercent = static_cast<double>(smallSize) / totalSold * 100;
  mediumPercent = static_cast<double>(mediumSize) / totalSold * 100;
  largePercent = static_cast<double>(largeSize) / totalSold * 100;
  familyPercent = static_cast<double>(familySize) / totalSold * 100;

  //display output
  cout << "Total sold: " << totalSold << endl;
  cout << "Small pizzas: " << smallPercent << "%" << endl;
  cout << "Medium pizzas: " << mediumPercent << "%" << endl;
  cout << "Large pizzas: " << largePercent << "%" << endl;
  cout << "Family pizzas: " << familyPercent << "%" << endl;

  return 0;
  
} // end of main function