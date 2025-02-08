//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto
#include <iostream>
using namespace std;
int main()
{
  // declare variables
  const double COMM_RATE = 0.1;
  double sales = 0.0;
  double commission = 0.0;

  // prompt user for sales
  std::cout << "Enter the sales amount: ";
  std::cin >> sales;

  // calculate commission
  commission = sales * COMM_RATE;

  // display commission
  std::cout << "The commission is $" << commission << std::endl; 

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/