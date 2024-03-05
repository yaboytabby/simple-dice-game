#include <iostream>


int main()
{
  std::cout << "Enter Integer: ";
  
  int input{ };
  
  std::cin >> input; // Cin uses >>, not <<.
  
  std::cout << "Your Integer Doubled is " << input*2 << "."; // prints the value of input, doubled.
  std::cout << "Your Integer Tripled is " << input*3 << "."; // prints the value of input, tripled.
  return 0; //exit code 0, meaning everything is good.

  
}