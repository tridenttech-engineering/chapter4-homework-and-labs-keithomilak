//Advanced16.cpp
//Created/revised by <Keith Omilak> on <2/8/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  
//declare constant and variables
  const double increase = 1.05;
  double store1 = 0.0;
  double store2 = 0.0;
  double total = 0.0;

  //Prompt user for input
  cout << "What are the sales for Store 1?\n";
  cin >> store1;
  cout << "What are the sales for Store 2?\n";
  cin >> store2;

  //Calculate the increase 
  store1 *= increase; /* *= multiplies the value stored in the named variable by the value on the right. Afterwards, it stores the                         result in the named variable.*/
  store2 *= increase;
  total = store1 + store2;

  //Set precision and calculate total
  cout << fixed << setprecision(2) << endl;
  total = store1 + store2;

  //display output
  cout << store1 << " --->Store 1" << endl;
  cout << store2 << " --->Store 2" << endl;
  cout << "-----------------" << endl;
  cout << total << " --->Total" << endl;
  return 0;
} //end of main function

//1. Declare and initalize three int variables named store1Int, store2Int, and totalInt
//2. Change the first assignment statement to store1Int = static_cast<int>(store1 * increase * 100 + .5);
//3. Change the second assignment statement to store2Int = static_cast<int>(store2 * increase * 100 + .5);
//4. Change the third assignment statement to totalInt = store1Int + store2Int;
//5. Change store1 in the second cout statement to store1Int / 100.0
//6. Change store2 in the third cout statement to store2Int / 100.0
//7. Change total in the last cout statement to totalInt / 100.0
//If this doesn't make sense, please reach out to me. 