#include "food.h"
#include <iostream>

void Food::SetPosition(int x, int y) {
  position.x = x;
  position.y = y;  
}

bool Food::CheckIfFoodIsThere(int x, int y) {
  if (position.x == x && position.y ==y) {
    return true;
  }
  return false;
}

SDL_Point Food::GetPosition() const {
  return position;
}