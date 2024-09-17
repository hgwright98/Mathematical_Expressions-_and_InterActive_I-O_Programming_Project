// These allow me to use the functions and manipulators from the libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
// This is the main function
int main() 
{
// This is where I initialize my variables
  float principal;
  float interestRate;
  float interestCompounded;
// This is a title to make everything look nice
  cout << "Savings Account Interest Calculator" << endl;
  cout << "-----------------------------------\n";
// This is where I ask the user for the principal, interest rate, and the number of times the interest is comp
  cout << left << setw(20) << "Interest rate: " << setw(7) << right << ""; 
  cin >> interestRate;
  interestRate = interestRate / 100;

  cout << left << setw(20) << "Times Compounded: " << setw(9) << right << "";
  cin >> interestCompounded;
  
  cout << left << setw(20) << "Principal: " << setw(4) << right << "$ "; 
  cin >> principal;
  // This is where I calculate the interest
  float amount2 = pow((1 + (interestRate / interestCompounded)), interestCompounded);
  float amount1 = principal * amount2;
  // This is where I output the interest
  cout  << left << setw(20)<< "Interest: " << setw(6) << setprecision(2) << fixed << right << "$   "<<amount1 - principal << endl;
  // This is where I output the total amount
  cout << left << setw(20) << "Amount in Savings: " << setw(4) << right << "$ " << amount1 << endl;
  return 0;
}
//By Hunter Wright