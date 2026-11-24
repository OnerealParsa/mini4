# Mini Project 4 — Traffic Simulation (C++)

A university assignment in C++ that models a small traffic scenario: a hierarchy of vehicles moves through an intersection governed by a set of traffic rules.

## Classes

| Class | Responsibility |
|---|---|
| `Vehicle` | Base class for all vehicles; `Car`, `Bus` and `EmergencyVehicle` inherit from it |
| `TrafficElement` | Base class for road rules |
| `TrafficLight` / `StopSign` / `SpeedLimitZone` | Concrete traffic rules |
| `Intersection` | Combines vehicles and traffic rules into a working scenario |

## Build & Run

```bash
g++ -std=c++17 -O2 -o traffic main.cpp Vehicle.cpp Car.cpp Bus.cpp EmergencyVehicle.cpp TrafficElement.cpp TrafficLight.cpp StopSign.cpp SpeedLimitZone.cpp Intersection.cpp
./traffic
```

## Concepts Demonstrated

Inheritance and polymorphism through a vehicle hierarchy, and rule objects applied at an intersection.
