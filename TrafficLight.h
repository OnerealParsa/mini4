#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include "TrafficElement.h"

enum LightState { RED, YELLOW, GREEN };

class TrafficLight : public TrafficElement {
private:
    LightState state;
public:
    TrafficLight(LightState s);
    LightState getState() const;
    void setState(LightState s);
    bool allows(const Vehicle& v) const override;
    void printRule() const override;
    bool operator==(const LightState& other) const;
};

#endif