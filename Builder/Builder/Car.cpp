#include "Car.h"

Car::Car() :
    _engine(0), _gps(0), _radio(0)
{

}

std::vector<int> Car::GetSeats() const
{
    return _seats;
}

void Car::SetSeat(int seat)
{
    _seats.push_back(seat);
}

int Car::GetEngine() const
{
    return _engine;
}

void Car::SetEngine(int engine)
{
    _engine = engine;
}

std::vector<int> Car::GetWheels() const
{
    return _wheels;
}

void Car::SetWheel(int wheel)
{
    _wheels.push_back(wheel);
}

int Car::GetGps() const
{
    return _gps;
}

void Car::SetGps(int gps)
{
    _gps = gps;
}

int Car::GetRadio() const
{
    return _radio;
}

void Car::SetRadio(int radio)
{
    _radio = radio;
}
