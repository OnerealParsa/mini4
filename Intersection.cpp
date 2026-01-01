#include "Intersection.h"
#include <iostream>
using namespace std;

Intersection::~Intersection() {
    for (auto v : vehicles) delete v;
    for (auto r : rules) delete r;
}

void Intersection::addVehicle(Vehicle* v) {
    vehicles.push_back(v);
}

void Intersection::addRule(TrafficElement* r) {
    rules.push_back(r);
}

void Intersection::checkRules() const {
    cout << "=== Checking Rules ===" << endl;
    for (auto rule : rules) {
        rule->printRule();
    }
}

void Intersection::decideMovement() const {
    cout << "\n=== Deciding Movement ===" << endl;
    for (auto v : vehicles) {
        bool canMoveAll = true;
        for (auto rule : rules) {
            if (!v->canMove(*rule)) {
                canMoveAll = false;
                break;
            }
        }
        if (canMoveAll) {
            v->move();
        } else {
            cout << "Vehicle " << v->getPlate() << " cannot move." << endl;
        }
    }
}

void Intersection::printStatus() const {
    cout << "\n=== Intersection Status ===" << endl;
    cout << "Total Vehicles: " << Vehicle::getTotalVehicles() << endl;
    for (auto v : vehicles) {
        v->printStatus();
    }
    checkRules();
}