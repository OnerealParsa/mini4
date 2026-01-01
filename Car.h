#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "TrafficElement.h"

class Car : public Vehicle {
public:
    Car(int id, string plate, int speed);
    bool canMove(const TrafficElement& rule) const override;
    void move() override;
    void printStatus() const override;
};

#endif