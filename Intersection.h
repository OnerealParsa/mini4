#ifndef INTERSECTION_H
#define INTERSECTION_H

#include <vector>
#include "Vehicle.h"
#include "TrafficElement.h"

class Intersection {
private:
    vector<Vehicle*> vehicles;
    vector<TrafficElement*> rules;
public:
    ~Intersection();
    void addVehicle(Vehicle* v);
    void addRule(TrafficElement* r);
    void checkRules() const;
    void decideMovement() const;
    void printStatus() const;
};

#endif