#include "Director.h"

Director::Director(const ICarBuilderShp& builder) :
    _builer(builder)
{

}

void Director::CreateStandardCar()
{
    if(_builer.isNull())
        return;

    _builer->CreateCar();

    _builer->SetEngine(1);

    _builer->SetSeat(1);
    _builer->SetSeat(1);
    _builer->SetSeat(1);
    _builer->SetSeat(1);

    _builer->SetWheel(1);
    _builer->SetWheel(1);
    _builer->SetWheel(1);
    _builer->SetWheel(1);

    _builer->SetGps(1);
    _builer->SetRadio(1);
}

void Director::CreateSportCar()
{
    if(_builer.isNull())
        return;

    _builer->CreateCar();

    _builer->SetEngine(2);

    _builer->SetSeat(2);
    _builer->SetSeat(2);

    _builer->SetWheel(2);
    _builer->SetWheel(2);
    _builer->SetWheel(2);
    _builer->SetWheel(2);

    _builer->SetGps(2);
    _builer->SetRadio(3);
}
