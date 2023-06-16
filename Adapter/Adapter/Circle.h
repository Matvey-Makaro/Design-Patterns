#pragma once

#include <QPoint>

class Circle
{
public:
    Circle(const QPoint& o, int r);
    QPoint GetCenter() const;
    int GetRadius() const;

private:
    QPoint _o;
    int _r;
};

