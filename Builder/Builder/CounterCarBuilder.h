#pragma once

#include "ICarBuilder.h"


class CounterCarBuilder : public ICarBuilder
{
public:
    CounterCarBuilder();

    virtual void CreateCar() override;
    virtual void SetSeat(int seatId) override;
    virtual void SetEngine(int engineId) override;
    virtual void SetWheel(int wheelId) override;
    virtual void SetGps(int gpsId) override;
    virtual void SetRadio(int radioId) override;

    void GetResult() const;

private:
    int _carsNum;
    int _seatsNum;
    int _enginesNum;
    int _wheelsNum;
    int _gpsNum;
    int _radioNum;
};

using CounterCarBuilderShp = QSharedPointer<CounterCarBuilder>;
