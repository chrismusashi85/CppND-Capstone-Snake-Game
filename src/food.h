#ifndef FOOD_H
#define FOOD_H

#include "SDL.h"

enum FoodAttr { Normal, Toxic }; // Food Attribute

class Food {
 public:

  Food(FoodAttr attr)
      : attr(attr)
    {}

  void SetPosition(int x, int y);

  bool CheckIfFoodIsThere(int x, int y);

  SDL_Point GetPosition() const;

  bool CheckFoodIsToxic();

 private:
  FoodAttr attr;
  SDL_Point position;
};

#endif