//
// Created by Bence on 07/12/2023.
//

#include "Car.h"
std::string Car::getVehicleName() {
  std::vector<std::string> carNames = {"Serpent", "Celestial", "Hero", "Zeal", "Motive", "Mastery", "Warrior", "Orbit", "Realm", "Millenium"};
  int maxValue = carNames.size() - 1;
  std::string carName = carNames[Random::get(0, maxValue)] + " " + carNames[Random::get(0, maxValue)];
  return carName;
}

int Car::normalSpeed() {
  int normalSpeed = Random::get(80, 110);
  return normalSpeed;
}
void Car::prepareForLap(bool isRaining, bool isYellowFlag, int currentHour) {
  if(isYellowFlag){
    actualSpeed = 75;
  } else {
    actualSpeed = normalSpeed();
  }
}

