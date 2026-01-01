#include "Car.h"
#include "TrafficLight.h"
#include "StopSign.h"
#include "SpeedLimitZone.h"
#include <iostream>
using namespace std;

Car::Car(int id, string plate, int speed) 
    : Vehicle(id, plate, speed) {}

bool Car::canMove(const TrafficElement& rule) const {
    return rule.allows(*this);
}

void Car::move() {
    cout << "Car " << plate << " is moving at speed " << speed << endl;
}

void Car::printStatus() const {
    cout << "Car - ID: " << id << ", Plate: " << plate 
         << ", Speed: " << speed << endl;
}