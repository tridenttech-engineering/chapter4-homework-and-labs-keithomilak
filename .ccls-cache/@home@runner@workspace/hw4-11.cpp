// Introductory11.cpp - displays ending balance
// Created/revised by <Keith Omilak> on <2/8/25>

#include <iostream>
using namespace std;

int main() 
{

  //Declare and initialize variables
  double startingBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double endingBalance = 0.0;

  //Enter input items
  cout << "Please enter your starting balance\n";
  cin >> startingBalance;
  cout << "Please enter your total deposits for the month\n";
  cin >> totalDeposits;
  cout << "Please enter your total withdrawls for the month\n";
  cin >> totalWithdrawals;

  //Calculate and display the ending balance
  endingBalance = startingBalance + totalDeposits - totalWithdrawals;
  cout << "Ending balance: $" << endingBalance << endl;
  return 0;
  
} // end of main function