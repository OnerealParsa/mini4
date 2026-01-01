#include "TrafficLight.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "EmergencyVehicle.h"
#include <iostream>
using namespace std;

TrafficLight::TrafficLight(LightState s) : state(s) {}

LightState TrafficLight::getState() const { return state; }
void TrafficLight::setState(LightState s) { state = s; }

bool TrafficLight::allows(const Vehicle& v) const {
    if (state == GREEN) return true;
    if (state == YELLOW) return true;
    if (dynamic_cast<const EmergencyVehicle*>(&v)) return true;
    return false;
}

void TrafficLight::printRule() const {
    cout << "Traffic Light: ";
    switch(state) {
        case RED: cout << "RED"; break;
        case YELLOW: cout << "YELLOW"; break;
        case GREEN: cout << "GREEN"; break;
    }
    cout << endl;
}

bool TrafficLight::operator==(const LightState& other) const {
    return state == other;
}