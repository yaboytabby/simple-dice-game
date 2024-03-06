#include <iostream>
#include <cstdlib> // Include the standard library for the rand() function
int rand_roll(int rollamt)  //allows for different sided dice.
{
    return rand() % rollamt + 1; // Generate a random number between 1 and rollamt. rollamt by default should be 6, but user can purchase upgrades to permanantly 'enhance' their die. 
}