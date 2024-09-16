#include <iostream>

int main() 
{
  float sugar = 1.5;
  float butter = 1;
  float flour = 2.75;
  int cookies = 48;
  int amount;

  std::cout << "How many cookies would you like to make?\n";
  std::cin >> amount;

  float sugarNeeded = (amount / cookies) * sugar;
  float butterNeeded = (amount / cookies) * butter;
  float flourNeeded = (amount / cookies) * flour;

  std::cout << "You need: " << std::endl;
  std::cout << "Sugar: " << sugarNeeded << std::endl;
  std::cout << "Butter: " << butterNeeded << std::endl;
  std::cout << "Flour: " << flourNeeded << std::endl;
  return 0;
}