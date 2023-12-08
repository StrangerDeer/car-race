//
// Created by Bence on 07/12/2023.
//

#include "Truck.h"
#include "../Random.h"

std::string Truck::getName() {
  int randomNumber = Random::get(0, 1000);

  return std::to_string(randomNumber);
}

void Truck::prepareForLap(bool isRaining, bool isYellowFlag, int currentHour) {
  if(!isBreakDown){
    int randomNumber = Random::get(0, 100);

    if(randomNumber <= breakDownChance){
      isBreakDown = true;
      actualSpeed = 0;
      prepareHour = currentHour + 2;
    } else {
      actualSpeed = truckNormalSpeed;
    }
  } else if(prepareHour == currentHour){
    isBreakDown = false;
    actualSpeed = truckNormalSpeed;
  }
}
