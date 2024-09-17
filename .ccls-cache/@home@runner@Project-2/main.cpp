#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
int main() 
{
  float principal;
  float interestRate;
  float interestCompounded;

  cout << "Interest rate: " << setw(7) <<""; 
  cin >> interestRate;
  interestRate = interestRate / 100;

  cout << "Times Compounded: " << setw(7) <<"";
  cin >> interestCompounded;
  
  cout << "Principal: " << setw(13) << "$ "; 
  cin >> principal;
  
  float amount2 = pow((1 + (interestRate / interestCompounded)), interestCompounded);
  float amount1 = principal * amount2;

  cout  << "Interest: " << setw(14) <<setprecision(2) << fixed << "$ "<<amount1 - principal << endl;
  
  cout  << "Amount in Savings: " << setw(5) << "$ " << amount1 << endl;
  return 0;
}
//By Hunter Wright