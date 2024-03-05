#include <iostream>

// this function contains parameters that pass values to the function

void print(int a, int b)
{
  std::cout << a << "\n";
  std::cout << b << "\n";


}

int main()
{
  print(4,5);
  return 0;
}