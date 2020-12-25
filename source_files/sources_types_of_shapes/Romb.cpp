#include "Scene.h"
#include "Romb.h"
#include "Figure.h"
#include <QPainter>

Romb::Romb(QPointF point, QObject *parent) :
    Figure(point, parent)
{
    Q_UNUSED(point)
}

Romb::~Romb()
{

}

// Реализуем метод отрисовки
void Romb::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(contour, 1));
    painter->setBrush(QBrush(back_color));

    QPolygonF polygon;

    polygon << QPointF(startPoint().x() + (endPoint().x() > startPoint().x() ? + 1 : - 1)*
                           abs((endPoint().x() - startPoint().x())/2), startPoint().y())
                << QPointF(endPoint().x(), startPoint().y() + (endPoint().y() > startPoint().y() ? + 1 : - 1)*
                           abs((endPoint().y() - startPoint().y())/2))
                << QPointF(startPoint().x() + (endPoint().x() > startPoint().x() ? + 1 : - 1)*
                           abs((endPoint().x() - startPoint().x())/2), endPoint().y())
                << QPointF(startPoint().x(), startPoint().y() + (endPoint().y() > startPoint().y() ? + 1 : - 1)*
                           abs((endPoint().y() - startPoint().y())/2));

    painter->drawPolygon(polygon);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}