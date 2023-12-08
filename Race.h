//
// Created by Bence on 07/12/2023.
//

#pragma once

#include <vector>
#include <string>
#include <iostream>
#include "Vehicle/Vehicle.h"
#include "Weather.h"
#include "Vehicle/Truck.h"

class Race {
 public:
  Race() : raceHour(50), yellowFlag(false){};
  void registerRace(const Vehicle& vehicle);
  void simulateRace();
  void printRaceResult();

 private:
  std::vector<Vehicle*> vehicles;
  std::vector<Truck*> trucks;
  Weather weather;
  int raceHour;
  bool yellowFlag;
};
