#ifndef TRIANGLE_H
#define TRIANGLE_H


#include <QObject>
#include <QGraphicsItem>
#include "Figure.h"
#include "Scene.h"

/* Наследуемся от класса Figure,
 * в котором реализован общий для всех фигур функционал
 * */
class Triangle : public Figure
{
    Q_OBJECT

public:
    explicit Triangle(QPointF point, QObject *parent = 0);
    ~Triangle();

private:
    // Для Треугольника реализуем только саму отрисовку
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // TRIANGLE_H
