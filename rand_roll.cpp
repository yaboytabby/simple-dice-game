#include <iostream>
#include <cstdlib> // Include the standard library for the rand() function

int rand_roll()
{
    return rand() % 6 + 1; // Generate a random number between 1 and 6
}