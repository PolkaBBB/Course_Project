#ifndef SCENE_H
#define SCENE_H

#include "Line.h"
#include "Figure.h"
#include <QGraphicsView>
#include <QMouseEvent>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class Line;
class Scene : public QGraphicsView {
    Q_OBJECT
    Q_PROPERTY(int typeFigure
                   READ typeFigure WRITE setTypeFigure
                   NOTIFY typeFigureChanged)

public:
    explicit Scene(int h, int w, QWidget *parent = 0);
    ~Scene();
    int typeFigure() const;                 // Возвращение текущего типа
    void setTypeFigure(const int type);     // Установка текущего типа

       // Перечисление типов используемых фигур
       enum FigureTypes {
           SquareType,
           RombType,
           TriangleType,
           EllipseType
       };

   signals:
       void typeFigureChanged();               // Сигнал об изменении типа текущей фигуры

   private:
       /* Объект для временного хранения рисуемой фигуры
        * Является объектом базового класса для всех трёх типов фигур в примере
        * */
       int m_typeFigure;   // текущий тип фигуры

   public slots:
    void resizeEvent(QResizeEvent *);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);

   public:
    QGraphicsScene m_scene;
    Line *m_line;
    bool m_isKeyPressed;
    QColor now_color = QColor(0, 0, 0);
    int count = 0;
    Figure *tempFigure;
    bool indicate = false;
    QGraphicsPixmapItem *item;
};

#endif // SCENE_H
