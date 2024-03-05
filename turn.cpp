#include <iostream>
#include <cstdlib>
int get_health();
int rand_roll();
int set_health(int health_mod);
int get_score();
int set_score(int score_mod);
int score{get_score()};

int turn()
{
  int roll = rand_roll();

  
  std::cout << "Press enter to roll the dice.\n";
  std::cin.ignore();
  std::cout << "\033[2J\033[1;1H"; //clear console after every roll for organization.
  std::cout << "You rolled " << roll << "!\n";
  if (roll == 1) {
    set_health(-1);
    std::cout << " Roll failed. You now have " << get_health() << " health.\n";
    return 0;
  }
  else
    {
      std::cout << "Roll passed. Score is now" << get_score() << ".\n";
      set_score(1);
   return 0;
    }

}
int lose()
{
  if (get_health() <= 0) {
    return false;  
  }
  else {
    return true;
  }
}