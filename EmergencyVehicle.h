#ifndef EMERGENCYVEHICLE_H
#define EMERGENCYVEHICLE_H

#include "Vehicle.h"
#include "TrafficElement.h"

class EmergencyVehicle : public Vehicle {
public:
    EmergencyVehicle(int id, string plate, int speed);
    bool canMove(const TrafficElement& rule) const override;
    void move() override;
    void printStatus() const override;
};

#endif