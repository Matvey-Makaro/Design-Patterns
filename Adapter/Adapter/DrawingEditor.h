#pragma once

#include <QVector>

#include "IShape.h"
#include "Rectangle.h"

class DrawingEditor
{
public:
    DrawingEditor();
    void DrawAll() const;

private:
    QVector<IShapeShp> _shapes;
};

