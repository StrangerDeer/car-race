//
// Created by Bence on 07/12/2023.
//

#pragma once

#include "Vehicle.h"
class Motorcycle : public Vehicle {

 public:
  Motorcycle(int number) : Vehicle(getName(number), "Motorcycle", motorNormalSpeed){};
  void prepareForLap(bool isRaining, bool isYellowFlag, int currentHour) override;

 private:
  static std::string getName(int number);
  static const int motorNormalSpeed = 100;
};
