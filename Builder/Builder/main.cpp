#include "MainWindow.h"
#include "Director.h"
#include "StandardCarBuilder.h"
#include "CounterCarBuilder.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    auto standardBuilder = StandardCarBuilderShp::create();
    Director standardDirector(standardBuilder);
    standardDirector.CreateStandardCar();
    auto standardCar = standardBuilder->GetResult();
    standardDirector.CreateSportCar();
    auto sportCar = standardBuilder->GetResult();

    auto counterBuilder = CounterCarBuilderShp::create();
    Director counterDirector(counterBuilder);
    counterDirector.CreateStandardCar();
    counterBuilder->GetResult();
    counterDirector.CreateSportCar();
    counterBuilder->GetResult();


    MainWindow w;
    w.show();
    return a.exec();
}
