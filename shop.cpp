#include "turn.h"
#include <iostream>

int get_health();
int get_score();
int set_score(int x);
int set_health(int);

int shop() {
  std::cout << "Would you like to go to the shop? (y/n)\n";
  char shop_choice{};
  std::cin >> shop_choice;
  switch (shop_choice) {
  case 'n': {
    std::cout << "You decide to not go to the shop.\n";
    return 0;
  }
  case 'y': {
    std::cout << "You have " << get_score() << " score.\n";
    std::cout << "You can buy upgrades or heal from the shop. Choose u/h for upgrades or healing. You can also choose 'n' to exit the shop." << std::endl;
    char shop_choice_2{};
    std::cin >> shop_choice_2;
    switch (shop_choice_2) {
    case 'u': {
      char shop_choice_3{};
      std::cout << "Pay 100 points to add another dice side?\n";
      std::cin >> shop_choice_3;
      switch (shop_choice_3) {
      case 'y': {
        if (get_score() >= 100) {
          set_score(-100);
          rolltiplier = rolltiplier + 1;
        }
        return 0;
      }
      case 'n': {
        std::cout << "You decide not to buy another dice side. Exiting the shop.\n";
        return 0;
      }
      case 'h': {
        char shop_choice_4{};
        std::cout << "Pay 50 points to heal?\n";
        std::cin >> shop_choice_4;
        switch (shop_choice_4) {
        case 'y': {
          if (get_score() >= 50) {
            set_health(+1);
            set_score(-50);
          }
          return 0;
        }
        case 'n': {
          return 0;
        }
        }
        return 0;
      }
      }
      return 0;
    }
    default: {
      std::cout << "Invalid choice. Exiting the shop.\n";
      return 0;
    }
    }
    return 0;
  }
  default: {
    std::cout << "Invalid choice.\n";
    return 0;
  }
  }
  return 0;
}