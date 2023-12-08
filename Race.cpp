//
// Created by Bence on 07/12/2023.
//

#include "Race.h"
void Race::registerRace(const Vehicle& vehicle) {
    vehicles.push_back(vehicle);

  if(dynamic_cast<const Truck*>(&vehicle) != nullptr){
    trucks.push_back((Truck *const) vehicle);
  }
}

void Race::simulateRace() {
  int currentHour = 0;
  while(currentHour <= raceHour){
    for(Vehicle& vehicle : vehicles){
      vehicle.prepareForLap(weather.isRaining(), yellowFlag, currentHour);
      vehicle.moveForAnHour();
    }
    weather.setWeather();
    currentHour++;
  }

}
void Race::printRaceResult() {
  for(const Vehicle& vehicle : vehicles){
    std::string message = "Name: " + vehicle.name + " Distance: " +  std::to_string(vehicle.distanceTravel) + "km Type: " + vehicle.type;
    std::cout << message << std::endl;
  }
}
