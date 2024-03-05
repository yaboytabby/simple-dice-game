#include <iostream>


void doWhatever()
{
  std::cout << "whatever\n";
}

int main()
{
  std::cout << "doing whatever\n"; //executed before doWhatever()
  doWhatever(); // the function that interrupts main()
  std::cout << "done doing whatever\n"; //executed after doWhatever()

  return 0;
}