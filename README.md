# Mini Project 4 — Traffic Simulation (C++)

A university assignment in C++ that models a small traffic scenario: vehicles (`Car`, `Bus`, `EmergencyVehicle`) approach an `Intersection` governed by traffic rules (`TrafficLight`, `StopSign`, `SpeedLimitZone`), which decides how each vehicle may proceed.

## Classes

| Class | Responsibility |
|---|---|
| `Vehicle` | Base class for all vehicles; `Car`, `Bus` and `EmergencyVehicle` inherit from it |
| `TrafficElement` | Base class for traffic rules |
| `TrafficLight` / `StopSign` / `SpeedLimitZone` | Concrete rules applied at an intersection |
| `Intersection` | Registers vehicles and rules, prints status and resolves movement |

## Build & Run

```bash
g++ -std=c++17 -O2 -o traffic main.cpp Vehicle.cpp Car.cpp Bus.cpp EmergencyVehicle.cpp TrafficElement.cpp TrafficLight.cpp StopSign.cpp SpeedLimitZone.cpp Intersection.cpp
./traffic
```

## Concepts Demonstrated

- Inheritance and polymorphism through a vehicle hierarchy
- Rule objects (traffic elements) applied to a shared context
- Operator overloading (`+` for speed, `>` for comparison, `==` for light state)
