#include "Scene.h"
#include "mainwindow.h"
#include "colors.h"
#include "Romb.h"
#include "Square.h"
#include "Triangle.h"
#include "Ellipse.h"
#include <QMouseEvent>
#include <QLineEdit>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QWidget>
#include <QListWidget>

Scene::Scene(int h, int w, QWidget *parent)
    : QGraphicsView(parent),
      m_scene(0, 0, w, h, this),
      m_isKeyPressed(false)
{
    setScene(&m_scene);
    fitInView(m_scene.sceneRect(), Qt::KeepAspectRatio);
}

void Scene::mousePressEvent(QMouseEvent *event) {
    if (count == 1) {
        Romb *item = new Romb(event->pos());
        item->setPos(event->pos());
        tempFigure = item;
        m_scene.addItem(tempFigure);
     }
    if (count == 2) {
        Square *item = new Square(event->pos());
        item->setPos(event->pos());
        tempFigure = item;
        m_scene.addItem(tempFigure);
     }
    if (count == 3) {
        Triangle *item = new Triangle(event->pos());
        item->setPos(event->pos());
        tempFigure = item;
        m_scene.addItem(tempFigure);
     }
    if (count == 4) {
        Ellipse *item = new Ellipse(event->pos());
        item->setPos(event->pos());
        tempFigure = item;
        m_scene.addItem(tempFigure);
     }
    if (count == 0){
      if (event->button() == Qt::LeftButton) {
        QPointF pos = mapToScene(event->pos());
        m_line = new Line(now_color, &m_scene);
        m_scene.addItem(m_line);
        m_line->addPoint(pos);
        m_isKeyPressed = true;
      } else if (event->button() == Qt::RightButton){
        QPointF pos = mapToScene(event->pos());
        m_line = new Line(QColor(255, 255, 255), &m_scene);
        m_scene.addItem(m_line);
        m_line->addPoint(pos);
        m_isKeyPressed = true;
     }
    }

}

void Scene::mouseMoveEvent(QMouseEvent *event) {
    if (count == 1){
        tempFigure->setEndPoint(event->pos());
        this->update(QRect/*F*/(0,0,this->width(), this->height()));
    }
    if (count == 2){
        tempFigure->setEndPoint(event->pos());
        this->update(QRect/*F*/(0,0,this->width(), this->height()));
    }
    if (count == 3){
        tempFigure->setEndPoint(event->pos());
        this->update(QRect/*F*/(0,0,this->width(), this->height()));
    }
    if (count == 4){
        tempFigure->setEndPoint(event->pos());
        this->update(QRect/*F*/(0,0,this->width(), this->height()));
    }
    if(count == 0){
    if (m_isKeyPressed) {
        QPointF pos = mapToScene(event->pos());
        m_line->addPoint(pos);
    }
    }

}

void Scene::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_isKeyPressed = false;
        m_line->removePoint();
    } else if (event->button() == Qt::RightButton){
        m_isKeyPressed = false;
        m_line->removePoint();
    }
}

void Scene::resizeEvent(QResizeEvent *) {
    fitInView(m_scene.sceneRect(), Qt::KeepAspectRatio);
}

void Scene::keyPressEvent(QKeyEvent *event) {
  if (nullptr == tempFigure)
    return;
  switch (event->key()) {
  case Qt::Key::Key_A:
    tempFigure->moveBy(-5, 0);
    break;
  case Qt::Key::Key_S:
    tempFigure->moveBy(0, 5);
    break;
  case Qt::Key::Key_D:
    tempFigure->moveBy(5, 0);
    break;
  case Qt::Key::Key_W:
    tempFigure->moveBy(0, -5);
    break;
  }
}

int Scene::typeFigure() const
{
    return m_typeFigure;
}

void Scene::setTypeFigure(const int type)
{
    m_typeFigure = type;
}

Scene::~Scene()
{

}
