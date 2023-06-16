#pragma once

#include <QRect>
#include <QSharedPointer>

class IShape
{
public:
    virtual QRect BoundingRect() const = 0;
    virtual void Draw() const = 0;
};

using IShapeShp = QSharedPointer<IShape>;
