#ifndef SQUARE_H
#define SQUARE_H


#include <QObject>
#include <QGraphicsItem>
#include "Figure.h"
#include "Scene.h"

/* Наследуемся от класса Figure,
 * в котором реализован общий для всех фигур функционал
 * */
class Square : public Figure
{
    Q_OBJECT

public:
    explicit Square(QPointF point, QObject *parent = 0);
    ~Square();

private:
    // Для Прямоугольника реализуем только саму отрисовку
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // SQUARE_H
