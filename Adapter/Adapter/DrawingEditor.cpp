#include "DrawingEditor.h"

#include "CircleAdapterClassImpl.h"
#include "CircleAdapterObjectImpl.h"

DrawingEditor::DrawingEditor()
{
    _shapes.push_back(RectangleShp::create(QRect{0, 0, 10, 10}));
    _shapes.push_back(RectangleShp::create(QRect{10, 10, 20, 30}));
    _shapes.push_back(RectangleShp::create(QRect{20, 20, 30, 10}));
    _shapes.push_back(CircleAdapterObjectImplShp::create(Circle(QPoint(100, 100), 10)));
    _shapes.push_back(CircleAdapterClassImplShp::create(QPoint(100, 100), 10));
}

void DrawingEditor::DrawAll() const
{
    for(const auto& s : _shapes)
        s->Draw();
}
