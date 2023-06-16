#pragma once

#include "IShape.h"

class Rectangle : public IShape
{
public:
    Rectangle(const QRect& rect);
    virtual QRect BoundingRect() const override;
    virtual void Draw() const override;

private:
    QRect _rect;
};

using RectangleShp = QSharedPointer<Rectangle>;
