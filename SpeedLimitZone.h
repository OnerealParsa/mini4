#ifndef SPEEDLIMITZONE_H
#define SPEEDLIMITZONE_H

#include "TrafficElement.h"

class SpeedLimitZone : public TrafficElement {
private:
    int limit;
public:
    SpeedLimitZone(int limit);
    bool allows(const Vehicle& v) const override;
    void printRule() const override;
    int getLimit() const;
};

#endif