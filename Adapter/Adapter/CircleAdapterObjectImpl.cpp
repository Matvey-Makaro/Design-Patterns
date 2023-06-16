#include <QDebug>

#include "CircleAdapterObjectImpl.h"


CircleAdapterObjectImpl::CircleAdapterObjectImpl(const Circle &circle) :
    _circle(circle)
{

}

QRect CircleAdapterObjectImpl::BoundingRect() const
{
    int left = _circle.GetCenter().x() - _circle.GetRadius();
    int top = _circle.GetCenter().y() + _circle.GetRadius();
    int width = 2 * _circle.GetRadius();
    int height = width;
    return QRect{left, top, width, height};
}

void CircleAdapterObjectImpl::Draw() const
{
    qDebug() << "Draw circle. Bounding rectangle: " << BoundingRect();
}
