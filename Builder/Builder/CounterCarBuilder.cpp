#include "CounterCarBuilder.h"

#include <QDebug>

CounterCarBuilder::CounterCarBuilder()
{

}

void CounterCarBuilder::CreateCar()
{
    _carsNum++;
}

void CounterCarBuilder::SetSeat(int seatId)
{
    _seatsNum++;
}

void CounterCarBuilder::SetEngine(int engineId)
{
    _enginesNum++;
}

void CounterCarBuilder::SetWheel(int wheelId)
{
    _wheelsNum++;
}

void CounterCarBuilder::SetGps(int gpsId)
{
    _gpsNum++;
}

void CounterCarBuilder::SetRadio(int radioId)
{
    _radioNum++;
}

void CounterCarBuilder::GetResult() const
{
    qDebug() << "Num of cars:" << _carsNum;
    qDebug() << "Num of seats:" << _seatsNum;
    qDebug() << "Num of engines:" << _enginesNum;
    qDebug() << "Num of wheels:" << _wheelsNum;
    qDebug() << "Num of gps:" << _gpsNum;
    qDebug() << "Num of radio:" << _radioNum;
}
