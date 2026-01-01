#include "SpeedLimitZone.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

SpeedLimitZone::SpeedLimitZone(int limit) : limit(limit) {}

bool SpeedLimitZone::allows(const Vehicle& v) const {
    return v.getSpeed() <= limit;
}

void SpeedLimitZone::printRule() const {
    cout << "Speed Limit Zone: Max speed = " << limit << endl;
}

int SpeedLimitZone::getLimit() const {
    return limit;
}