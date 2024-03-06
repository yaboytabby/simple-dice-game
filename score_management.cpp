#include <iostream>
int get_score();
int s{0};
int get_score() { return s; }

int set_score(int x) {
  int tempscore = s;
  s = tempscore + x;
  return s;
}