#pragma once

#include "IShape.h"
#include "Circle.h"


class CircleAdapterObjectImpl : public IShape
{
public:
    CircleAdapterObjectImpl(const Circle& circle);
    virtual QRect BoundingRect() const override;
    virtual void Draw() const override;

private:
    Circle _circle;
};

using CircleAdapterObjectImplShp = QSharedPointer<CircleAdapterObjectImpl>;
