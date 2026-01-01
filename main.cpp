#include "Car.h"
#include "Bus.h"
#include "EmergencyVehicle.h"
#include "TrafficLight.h"
#include "StopSign.h"
#include "SpeedLimitZone.h"
#include "Intersection.h"
#include <iostream>
using namespace std;

int main() {
    Car car1(1, "ABC-123", 60);
    Bus bus1(2, "BUS-001", 50);
    EmergencyVehicle emv1(3, "EMG-911", 80);

    TrafficLight tl(RED);
    StopSign ss;
    SpeedLimitZone slz(70);

    Intersection intersection;
    intersection.addVehicle(&car1);
    intersection.addVehicle(&bus1);
    intersection.addVehicle(&emv1);
    intersection.addRule(&tl);
    intersection.addRule(&ss);
    intersection.addRule(&slz);

    intersection.printStatus();
    intersection.decideMovement();

    cout << "\n=== Testing Operator Overloading ===" << endl;
    car1 + 10;
    cout << "Car speed after +10: " << car1.getSpeed() << endl;
    
    if (car1 > bus1) {
        cout << "Car is faster than Bus" << endl;
    } else {
        cout << "Bus is faster than Car" << endl;
    }

    if (tl == RED) {
        cout << "Traffic Light is RED" << endl;
    }

    return 0;
}