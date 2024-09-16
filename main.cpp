#include <iostream>
// This allows me to use the setprecision and fixed manipulators
#include <iomanip>
// This allows me to use the cout and cin functions
using namespace std;
// This is creates the main function to allow my program to run
int main() 
{
  // This is where all my variables are initialized
  float sugar = 1.5;
  float butter = 1;
  float flour = 2.75;
  float cookies = 48;
  float amount;
  // This is the title of my program
  cout << "The Cookie Calculator\n";
  cout << "\n";
  // This is the prompt for the user
  cout << "How many cookies would you like to make?\n";
  // This is where the user inputs the amount of cookies they want
  cin >> amount;
  cout << "\n";
  // This is the calculation for the amount of ingredients needed for the cookies
  float sugarNeeded = (amount / cookies) * sugar;
  float butterNeeded = (amount / cookies) * butter;
  float flourNeeded = (amount / cookies) * flour;
  // This is the output of the amount of ingredients needed for the cookies
  cout << "The ingredients you will need: " << endl;
  cout << setprecision(2) << fixed << "Sugar: " << sugarNeeded << " cups" << endl;
  cout << "Butter: " << butterNeeded << " cups" << endl;
  cout << "Flour: " << flourNeeded << " cups" << endl;
  return 0;
}

//By Hunter Wright