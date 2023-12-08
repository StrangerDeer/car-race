//
// Created by Bence on 07/12/2023.
//

#include <iostream>
#include "Motorcycle.h"
#include "../Random.h"

std::string Motorcycle::getName(int number) {
  return "Motorcycle " + std::to_string(number);
}
void Motorcycle::prepareForLap(bool isRaining, bool isYellowFlag, int currentHour) {
  if(isRaining){
    std::cout << name << " slow down" << std::endl;
    actualSpeed = normalSpeed - Random::get(5, 50);
  }else{
    actualSpeed = motorNormalSpeed;
  }
}
