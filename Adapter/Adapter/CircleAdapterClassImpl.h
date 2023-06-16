#pragma once

#include "IShape.h"
#include "Circle.h"


class CircleAdapterClassImpl : public IShape, private Circle
{
public:
    CircleAdapterClassImpl(const QPoint& o, int r);
    virtual QRect BoundingRect() const override;
    virtual void Draw() const override;
};

using CircleAdapterClassImplShp = QSharedPointer<CircleAdapterClassImpl>;
