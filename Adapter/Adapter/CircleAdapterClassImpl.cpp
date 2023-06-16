#include "CircleAdapterClassImpl.h"

#include <QDebug>


CircleAdapterClassImpl::CircleAdapterClassImpl(const QPoint &o, int r) :
    Circle(o, r)
{}

QRect CircleAdapterClassImpl::BoundingRect() const
{
    int left = GetCenter().x() - GetRadius();
    int top = GetCenter().y() + GetRadius();
    int width = 2 * GetRadius();
    int height = width;
    return QRect{left, top, width, height};
}

void CircleAdapterClassImpl::Draw() const
{
    qDebug() << "Draw circle. Bounding rectangle: " << BoundingRect();
}
