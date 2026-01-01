#ifndef TRAFFICELEMENT_H
#define TRAFFICELEMENT_H

class Vehicle;

class TrafficElement {
public:
    virtual ~TrafficElement();
    virtual bool allows(const Vehicle& v) const = 0;
    virtual void printRule() const = 0;
};

#endif