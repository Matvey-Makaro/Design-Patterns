#pragma once
#include <QSharedPointer>

class ICarBuilder
{
public:
    virtual void CreateCar() = 0;
    virtual void SetSeat(int seatId) = 0;
    virtual void SetEngine(int engineId) = 0;
    virtual void SetWheel(int wheelId) = 0;
    virtual void SetGps(int gpsId) = 0;
    virtual void SetRadio(int radioId) = 0;
};

using ICarBuilderShp = QSharedPointer<ICarBuilder>;
