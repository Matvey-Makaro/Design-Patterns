#include "Circle.h"



Circle::Circle(const QPoint &o, int r) :
    _o(o), _r(r)
{

}

QPoint Circle::GetCenter() const
{
    return _o;
}

int Circle::GetRadius() const
{
    return _r;
}
