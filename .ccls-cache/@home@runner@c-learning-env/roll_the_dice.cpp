#include <iostream>
int get_health();
int set_health(int health_mod);
bool turn();
bool lose();
bool is_alive{lose()};
// set variables set in other files.
int main()
{
  std::cout << "Welcome to the Game of dice!\n";
  std::cout << "The game is simple: you roll the dice and if you get a 1, you lose health.\n";
  std::cout << "Anyways, allow us to begin!\n";
  std::cout << "You have " << get_health() << " health.\n";
  while (is_alive == true) {
    turn();
    is_alive = lose();
  }
    exit(0);
  
  
}