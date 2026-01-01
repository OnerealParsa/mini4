#include "Vehicle.h"

int Vehicle::totalVehicles = 0;

Vehicle::Vehicle(int id, string plate, int speed) 
    : id(id), plate(plate), speed(speed) {
    totalVehicles++;
}

Vehicle::~Vehicle() {
    totalVehicles--;
}

int Vehicle::getId() const { return id; }
string Vehicle::getPlate() const { return plate; }
int Vehicle::getSpeed() const { return speed; }

Vehicle& Vehicle::operator+(int increase) {
    speed += increase;
    return *this;
}

bool Vehicle::operator>(const Vehicle& other) const {
    return speed > other.speed;
}

int Vehicle::getTotalVehicles() {
    return totalVehicles;
}