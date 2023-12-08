//
// Created by Bence on 07/12/2023.
//

#pragma once

#include <vector>
#include "Vehicle.h"
#include "../Random.h"


class Car : public Vehicle {
 public:
  Car() : Vehicle(getVehicleName(), "Car", normalSpeed()){};
  void prepareForLap(bool isRaining, bool isYellowFlag, int currentHour) override;
 private:
  static int normalSpeed();
  static std::string getVehicleName();
};
