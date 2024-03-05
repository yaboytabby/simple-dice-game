#include <iostream>

int main()
{
[[maybe_unused]] int x {5};
  /* this is direct list 
    initalization. 
    this is favored in most cases, and is generally what to use.
    however, a mix of all of the inits is good because of some quirks with DLI.*/
  [[maybe_unused]] int x2 {};
  /* this is a zero initalization. use this when you are just making a placeholder value. when actually using a value of '0', just assign it like this; */
  // int x2 {0};
 
}