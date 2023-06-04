#pragma once

#include <vector>
#include <QSharedPointer>

class Car
{
public:
    Car();

    std::vector<int> GetSeats() const;
    void SetSeat(int seat);

    int GetEngine() const;
    void SetEngine(int engine);

    std::vector<int> GetWheels() const;
    void SetWheel(int wheel);

    int GetGps() const;
    void SetGps(int gps);

    int GetRadio() const;
    void SetRadio(int radio);

private:
    std::vector<int> _seats;
    int _engine;
    std::vector<int> _wheels;
    int _gps;
    int _radio;
};

using CarShp = QSharedPointer<Car>;
