#include <iostream>

int getValueFromUser() //gets an integer value and returns it.
{
  int GrabbedValue{};
  std::cout << "Enter an integer:\n";
  std::cin >> GrabbedValue;
  return GrabbedValue;
  


}
bool CheckValue() //checks if  returned value is positive or negative
{
  int ValueFromUser{getValueFromUser()};
  if (ValueFromUser > 0)
    return true;
  else
    return false;

  
}

int main() // uses earlier functions to print if the value is positive or negative.
{
  int CheckedValue{CheckValue()};
  if (CheckedValue == true)
    std::cout << "The value is positive";
  else
    std::cout << "The value is negative";
return 0;

  
}
