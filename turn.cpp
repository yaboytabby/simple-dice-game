#include <cstdlib>
#include <iostream>
int get_health();
int rolltiplier{6};
int rand_roll(int );
int set_health(int health_mod);
int get_score();
void shop();
int set_score(int score_mod);
int score{get_score()};
int successful_rolls{0}; // Counter for successful rolls
int turn() {
  int roll = rand_roll(rolltiplier);
  std::cout << "Press enter to roll the dice. Current dice value is " << rolltiplier << " sided.\n";
  std::cin.ignore();
  std::cout
      << "\033[2J\033[1;1H"; // clear console after every roll for organization.
  std::cout << "You rolled " << roll << "!\n";

  if (roll == 1) {
    set_health(-1);
    std::cout << "Roll failed. You now have " << get_health() << " health.\n";
  } else {
    successful_rolls++;
    if (successful_rolls >= 20) {
      shop();
      successful_rolls = 0; // Reset successful rolls counter
    }  else {
      std::cout << "Roll passed. Score is now " << get_score() << ".\n";
      set_score(1);
    }
  }

  return 0;
}
int lose() {
  if (get_health() <= 0) {
    return false;
  } else {
    return true;
  }
}