#ifndef STOPSIGN_H
#define STOPSIGN_H

#include "TrafficElement.h"

class StopSign : public TrafficElement {
public:
    bool allows(const Vehicle& v) const override;
    void printRule() const override;
};

#endif