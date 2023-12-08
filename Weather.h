//
// Created by Bence on 07/12/2023.
//

#pragma once
#include <random>

class Weather {

 public:
  bool isRaining();
  void setWeather();

 private:
  bool raining = false;
  void randomize();
};
