#include <QDebug>
#include "Rectangle.h"



Rectangle::Rectangle(const QRect &rect) :
    _rect(rect)
{

}

QRect Rectangle::BoundingRect() const
{
    return _rect;
}

void Rectangle::Draw() const
{
    qDebug() << "Drawing rectangle:" << _rect;
}
