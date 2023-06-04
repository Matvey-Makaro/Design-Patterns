#pragma once

#include "ICarBuilder.h"

class Director
{
public:
    Director(const ICarBuilderShp& builder);

    void CreateStandardCar();
    void CreateSportCar();

private:
    ICarBuilderShp _builer;
};

