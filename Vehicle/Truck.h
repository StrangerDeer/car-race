//
// Created by Bence on 07/12/2023.
//

#pragma once

#include "Vehicle.h"
class Truck : public Vehicle {

 public:
  Truck() : Vehicle(getName(), "Truck", truckNormalSpeed), isBreakDown(false), breakDownChance(5), prepareHour(0){};
  bool isBreakDown;
  void prepareForLap(bool isRaining, bool isYellowFlag, int currentHour) override;

 private:
  static std::string getName();
  static const int truckNormalSpeed = 100;
  int breakDownChance;
  int prepareHour;
};
