#pragma once

#include "ICarBuilder.h"
#include "Car.h"

#include <QSharedPointer>

class StandardCarBuilder : public ICarBuilder
{
public:
    StandardCarBuilder();

    /// ICarBuilder interface
    virtual void CreateCar() override;
    virtual void SetSeat(int seatId) override;
    virtual void SetEngine(int engineId) override;
    virtual void SetWheel(int wheelId) override;
    virtual void SetGps(int gpsId) override;
    virtual void SetRadio(int radioId) override;

    CarShp GetResult() const;

private:
    CarShp _car;
};

using StandardCarBuilderShp = QSharedPointer<StandardCarBuilder>;
