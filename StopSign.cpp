#include "StopSign.h"
#include "Vehicle.h"
#include "EmergencyVehicle.h"
#include <iostream>
using namespace std;

bool StopSign::allows(const Vehicle& v) const {
    return dynamic_cast<const EmergencyVehicle*>(&v) != nullptr;
}

void StopSign::printRule() const {
    cout << "Stop Sign: All vehicles must stop unless emergency." << endl;
}