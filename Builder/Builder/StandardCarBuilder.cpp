#include "StandardCarBuilder.h"

StandardCarBuilder::StandardCarBuilder()
{}

void StandardCarBuilder::CreateCar()
{
    _car = CarShp::create();

}

void StandardCarBuilder::SetSeat(int seatId)
{
    _car->SetSeat(seatId);
}

void StandardCarBuilder::SetEngine(int engineId)
{
    _car->SetEngine(engineId);
}

void StandardCarBuilder::SetWheel(int wheelId)
{
    _car->SetWheel(wheelId);
}

void StandardCarBuilder::SetGps(int gpsId)
{
    _car->SetGps(gpsId);
}

void StandardCarBuilder::SetRadio(int radioId)
{
    _car->SetRadio(radioId);
}

CarShp StandardCarBuilder::GetResult() const
{
    return _car;
}
