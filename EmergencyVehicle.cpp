#include "EmergencyVehicle.h"
#include "TrafficLight.h"
#include "StopSign.h"
#include "SpeedLimitZone.h"
#include <iostream>
using namespace std;

EmergencyVehicle::EmergencyVehicle(int id, string plate, int speed) 
    : Vehicle(id, plate, speed) {}

bool EmergencyVehicle::canMove(const TrafficElement& rule) const {
    if (const TrafficLight* tl = dynamic_cast<const TrafficLight*>(&rule)) {
        return true;
    }
    return rule.allows(*this);
}

void EmergencyVehicle::move() {
    cout << "Emergency Vehicle " << plate << " is moving at speed " << speed << endl;
}

void EmergencyVehicle::printStatus() const {
    cout << "EmergencyVehicle - ID: " << id << ", Plate: " << plate 
         << ", Speed: " << speed << endl;
}