//
// Created by Bence on 07/12/2023.
//

#include <iostream>
#include "Weather.h"
#include "Random.h"

bool Weather::isRaining() {
  return raining;
}

void Weather::randomize() {
  int rainChance = 30;
  auto randomNumber = Random::get(1, 100);

  if(randomNumber < rainChance){
    raining = true;
  } else {
    raining = false;
  }
}
void Weather::setWeather() {
  randomize();
}
