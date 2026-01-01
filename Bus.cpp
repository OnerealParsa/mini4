#include "Bus.h"
#include "TrafficLight.h"
#include "StopSign.h"
#include "SpeedLimitZone.h"
#include <iostream>
using namespace std;

Bus::Bus(int id, string plate, int speed) 
    : Vehicle(id, plate, speed) {}

bool Bus::canMove(const TrafficElement& rule) const {
    return rule.allows(*this);
}

void Bus::move() {
    cout << "Bus " << plate << " is moving at speed " << speed << endl;
}

void Bus::printStatus() const {
    cout << "Bus - ID: " << id << ", Plate: " << plate 
         << ", Speed: " << speed << endl;
}