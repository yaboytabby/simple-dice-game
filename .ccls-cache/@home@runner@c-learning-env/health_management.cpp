#include <iostream>
int set_health(int health_mod);
int get_health();
int h{10};

int get_health()
{
  int h{set_health(0)};
  return h;
  
}
int set_health(int health_mod){
    h += health_mod; // Update the global health variable directly
    return h;
}