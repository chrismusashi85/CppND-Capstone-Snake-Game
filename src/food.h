#ifndef FOOD_H
#define FOOD_H

#include <vector>
#include "SDL.h"

class Food {
 public:
/*
  enum FoodAttr { Normal, Toxic }; // Food Attribute
  Food(FoodAttr attr, SDL_Point position)
      : attr(attr), position(position)
    {}
*/
  Food()
    {}
  
  void SetPosition(int x, int y);

  bool CheckIfFoodIsThere(int x, int y);

  SDL_Point GetPosition() const;

 private:
  //FoodAttr attr;
  SDL_Point position;
};

#endif