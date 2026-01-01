#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

class TrafficElement;

class Vehicle {
protected:
    int id;
    string plate;
    int speed;
    static int totalVehicles;

public:
    Vehicle(int id, string plate, int speed);
    virtual ~Vehicle();

    virtual bool canMove(const TrafficElement& rule) const = 0;
    virtual void move() = 0;
    virtual void printStatus() const = 0;

    int getId() const;
    string getPlate() const;
    int getSpeed() const;

    Vehicle& operator+(int increase);
    bool operator>(const Vehicle& other) const;

    static int getTotalVehicles();
};

#endif