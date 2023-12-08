//
// Created by Bence on 07/12/2023.
//

#pragma once
#include <string>

class Vehicle {
 public:
  Vehicle(std::string name, std::string type, int normalSpeed) : name(std::move(name)), type(std::move(type)), actualSpeed(normalSpeed), distanceTravel(0){};
  std::string name;
  std::string type;
  int normalSpeed;
  int actualSpeed;
  int distanceTravel;
  void moveForAnHour();
  virtual void prepareForLap(bool isRaining, bool isYellowFlag, int currentHour) = 0;
};
