#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"
#include "TrafficElement.h"

class Bus : public Vehicle {
public:
    Bus(int id, string plate, int speed);
    bool canMove(const TrafficElement& rule) const override;
    void move() override;
    void printStatus() const override;
};

#endif