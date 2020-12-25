#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Scene.h"
#include "Line.h"
#include "colors.h"
#include <QLayout>
#include <QGraphicsView>
#include <QPixmap>
#include <QMouseEvent>
#include <QListWidget>
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_red_1_clicked()
{
    canvas->now_color = QColor(255, 0, 0);

}

void MainWindow::on_orange_1_clicked()
{
    canvas->now_color = QColor(255, 120, 1);

}

void MainWindow::on_yellow_1_clicked()
{
    canvas->now_color = QColor(255, 255, 0);

}

void MainWindow::on_green_1_clicked()
{
    canvas->now_color = QColor(85, 170, 0);

}

void MainWindow::on_blue_1_clicked()
{
    canvas->now_color = QColor(0, 170, 255);

}


void MainWindow::on_purple_1_clicked()
{
    canvas->now_color = QColor(170, 0, 255);

}

void MainWindow::on_pink_1_clicked()
{
    canvas->now_color = QColor(255, 0, 255);

}

void MainWindow::on_black_clicked()
{
    canvas->now_color = QColor(0, 0, 0);

}

void MainWindow::on_white_clicked()
{
    canvas->now_color = QColor(255, 255, 255);

}

void MainWindow::on_red_2up_clicked()
{
    canvas->now_color = QColor(255, 65, 1);

}

void MainWindow::on_red_3up_clicked()
{
    canvas->now_color = QColor(255, 0, 55);

}

void MainWindow::on_red_4up_clicked()
{
    canvas->now_color = QColor(255, 107, 107);

}

void MainWindow::on_red_5up_clicked()
{
    canvas->now_color = QColor(255, 155, 135);

}

void MainWindow::on_red_6up_clicked()
{
    canvas->now_color = QColor(255, 222, 207);

}

void MainWindow::on_red_2down_clicked()
{
    canvas->now_color = QColor(216, 0, 0);

}

void MainWindow::on_red_3down_clicked()
{
    canvas->now_color = QColor(193, 0, 45);

}

void MainWindow::on_red_4down_clicked()
{
    canvas->now_color = QColor(172, 7, 38);

}

void MainWindow::on_red_5down_clicked()
{
    canvas->now_color = QColor(118, 0, 0);

}

void MainWindow::on_red_6down_clicked()
{
    canvas->now_color = QColor(60, 0, 0);

}

void MainWindow::on_red_7down_clicked()
{
    canvas->now_color = QColor(30, 0, 0);

}

void MainWindow::on_orange_2up_clicked()
{
    canvas->now_color = QColor(255, 170, 0);

}

void MainWindow::on_orange_3up_clicked()
{
    canvas->now_color = QColor(255, 200, 3);

}

void MainWindow::on_orange_4up_clicked()
{
    canvas->now_color = QColor(255, 181, 121);

}

void MainWindow::on_orange_5up_clicked()
{
    canvas->now_color = QColor(255, 230, 153);

}

void MainWindow::on_orange_6up_clicked()
{
    canvas->now_color = QColor(255, 247, 219);

}

void MainWindow::on_orange_2down_clicked()
{
    canvas->now_color = QColor(225, 160, 20);

}

void MainWindow::on_orange_3down_clicked()
{
    canvas->now_color = QColor(208, 69, 0);

}

void MainWindow::on_orange_4down_clicked()
{
    canvas->now_color = QColor(139, 88, 16);

}

void MainWindow::on_orange_5down_clicked()
{
    canvas->now_color = QColor(148, 87, 59);

}

void MainWindow::on_orange_6down_clicked()
{
    canvas->now_color = QColor(117, 39, 0);

}

void MainWindow::on_orange_7down_clicked()
{
    canvas->now_color = QColor(89, 49, 2);

}

void MainWindow::on_yellow_2up_clicked()
{
    canvas->now_color = QColor(255, 238, 3);

}

void MainWindow::on_yellow_3up_clicked()
{
    canvas->now_color = QColor(255, 255, 127);

}

void MainWindow::on_yellow_4up_clicked()
{
    canvas->now_color = QColor(225, 255, 185);

}

void MainWindow::on_yellow_5up_clicked()
{
    canvas->now_color = QColor(247, 255, 162);

}

void MainWindow::on_yellow_6up_clicked()
{
    canvas->now_color = QColor(255, 255, 188);

}

void MainWindow::on_yellow_2down_clicked()
{
    canvas->now_color = QColor(212, 255, 0);

}

void MainWindow::on_yellow_3down_clicked()
{
    canvas->now_color = QColor(222, 222, 0);

}

void MainWindow::on_yellow_4down_clicked()
{
    canvas->now_color = QColor(126, 147, 20);

}

void MainWindow::on_yellow_5down_clicked()
{
    canvas->now_color = QColor(105, 113, 72);

}

void MainWindow::on_yellow_6down_clicked()
{
    canvas->now_color = QColor(66, 66, 0);

}

void MainWindow::on_yellow_7down_clicked()
{
    canvas->now_color = QColor(32, 40, 7);

}

void MainWindow::on_green_2up_clicked()
{
    canvas->now_color = QColor(0, 255, 0);

}

void MainWindow::on_green_3up_clicked()
{
    canvas->now_color = QColor(0, 255, 127);

}

void MainWindow::on_green_4up_clicked()
{
    canvas->now_color = QColor(0, 255, 191);

}

void MainWindow::on_green_5up_clicked()
{
    canvas->now_color = QColor(176, 255, 202);

}

void MainWindow::on_green_6up_clicked()
{
    canvas->now_color = QColor(235, 255, 231);

}

void MainWindow::on_green_2down_clicked()
{
    canvas->now_color = QColor(33, 177, 86);

}

void MainWindow::on_green_3down_clicked()
{
    canvas->now_color = QColor(85, 170, 127);

}

void MainWindow::on_green_4down_clicked()
{
    canvas->now_color = QColor(57, 121, 73);

}

void MainWindow::on_green_5down_clicked()
{
    canvas->now_color = QColor(0, 99, 33);

}

void MainWindow::on_green_6down_clicked()
{
    canvas->now_color = QColor(0, 68, 42);

}

void MainWindow::on_green_7down_clicked()
{
    canvas->now_color = QColor(31, 61, 0);

}

void MainWindow::on_blue_2up_clicked()
{
    canvas->now_color = QColor(147, 214, 255);

}

void MainWindow::on_blue_3up_clicked()
{
    canvas->now_color = QColor(52, 228, 255);

}

void MainWindow::on_blue_4up_clicked()
{
    canvas->now_color = QColor(85, 255, 255);

}

void MainWindow::on_blue_5up_clicked()
{
    canvas->now_color = QColor(216, 248, 255);

}

void MainWindow::on_blue_6up_clicked()
{
    canvas->now_color = QColor(221, 236, 255);

}

void MainWindow::on_blue_2down_clicked()
{
    canvas->now_color = QColor(84, 124, 255);

}

void MainWindow::on_blue_3down_clicked()
{
    canvas->now_color = QColor(17, 88, 255);

}

void MainWindow::on_blue_4down_clicked()
{
    canvas->now_color = QColor(0, 0, 255);

}

void MainWindow::on_blue_5down_clicked()
{
    canvas->now_color = QColor(0, 0, 122);

}

void MainWindow::on_blue_6down_clicked()
{
    canvas->now_color = QColor(0, 47, 71);

}

void MainWindow::on_blue_7down_clicked()
{
    canvas->now_color = QColor(0, 0, 59);

}

void MainWindow::on_purple_2up_clicked()
{
    canvas->now_color = QColor(170, 0, 127);

}

void MainWindow::on_purple_3up_clicked()
{
    canvas->now_color = QColor(170, 85, 255);

}

void MainWindow::on_purple_4up_clicked()
{
    canvas->now_color = QColor(170, 170, 255);

}

void MainWindow::on_purple_5up_clicked()
{
    canvas->now_color = QColor(224, 210, 255);

}

void MainWindow::on_purple_6up_clicked()
{
    canvas->now_color = QColor(248, 233, 255);

}

void MainWindow::on_purple_2down_clicked()
{
    canvas->now_color = QColor(201, 58, 220);

}

void MainWindow::on_purple_3down_clicked()
{
    canvas->now_color = QColor(85, 0, 127);

}

void MainWindow::on_purple_4down_clicked()
{
    canvas->now_color = QColor(85, 0, 255);

}

void MainWindow::on_purple_5down_clicked()
{
    canvas->now_color = QColor(86, 0, 65);

}

void MainWindow::on_purple_6down_clicked()
{
    canvas->now_color = QColor(51, 4, 61);

}

void MainWindow::on_purple_7down_clicked()
{
    canvas->now_color = QColor(33, 0, 49);

}

void MainWindow::on_pink_2up_clicked()
{
    canvas->now_color = QColor(255, 85, 127);

}

void MainWindow::on_pink_3up_clicked()
{
    canvas->now_color = QColor(255, 120, 145);

}

void MainWindow::on_pink_4up_clicked()
{
    canvas->now_color = QColor(255, 170, 255);

}

void MainWindow::on_pink_5up_clicked()
{
    canvas->now_color = QColor(255, 212, 236);

}

void MainWindow::on_pink_6up_clicked()
{
    canvas->now_color = QColor(255, 244, 255);

}

void MainWindow::on_pink_2down_clicked()
{
    canvas->now_color = QColor(255, 85, 255);

}

void MainWindow::on_pink_3down_clicked()
{
    canvas->now_color = QColor(255, 0, 127);

}

void MainWindow::on_pink_4down_clicked()
{
    canvas->now_color = QColor(177, 0, 71);

}

void MainWindow::on_pink_5down_clicked()
{
    canvas->now_color = QColor(158, 74, 94);

}

void MainWindow::on_pink_6down_clicked()
{
    canvas->now_color = QColor(107, 62, 82);

}

void MainWindow::on_pink_7down_clicked()
{
    canvas->now_color = QColor(111, 0, 56);

}

void MainWindow::on_gray_clicked()
{
    canvas->now_color = QColor(131, 131, 131);

}

void MainWindow::on_gray_1right_clicked()
{
    canvas->now_color = QColor(179, 179, 179);

}

void MainWindow::on_gray_2right_clicked()
{
    canvas->now_color = QColor(225, 225, 225);

}

void MainWindow::on_gray_1left_clicked()
{
    canvas->now_color = QColor(83, 83, 83);

}

void MainWindow::on_gray_2left_clicked()
{
    canvas->now_color = QColor(40, 40, 40);

}

void MainWindow::on_Brush_clicked()
{
    canvas->count = 0;
}

void MainWindow::on_AddRomb_clicked()
{
    canvas->count = 1;
    canvas->setTypeFigure(Scene::RombType);
}

void MainWindow::on_AddSquare_clicked()
{
    canvas->count = 2;
    canvas->setTypeFigure(Scene::SquareType);
}

void MainWindow::on_AddTriangle_clicked()
{
    canvas->count = 3;
    canvas->setTypeFigure(Scene::TriangleType);
}

void MainWindow::on_AddEllipse_clicked()
{
    canvas->count = 4;
    canvas->setTypeFigure(Scene::EllipseType);
}

void MainWindow::on_Exit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_Save_triggered()
{
    QString newPath = QFileDialog::getSaveFileName(this, tr("Save File"),
            path, tr("Images (*.jpg *.xpm *.png)"));

    QImage image(canvas->width(), canvas->height(), QImage::Format_RGB32);
    image.fill(0xffffff);
    QPainter painter(&image);
    painter.setRenderHint(QPainter::Antialiasing);
    canvas->render(&painter);
    image.save(newPath);
}

void MainWindow::on_Insert_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
            path, tr("Images (*.jpg *.xpm *.png)"));
    QMessageBox::information(this, "Справка", "|***Внимание!!! Если размер вашей картинки более чем 500х500 пикселей, будьте готовы к тому что "
                                              "ваше изображение может вставиться не совсем корректно, то есть на листе отобразится только часть от "
                                              "выбранной картинки. Вы также можете удалить данное изображение, если оно вам не понравилось, "
                                              "воспользовавшись графой <Лист> и кликнув на <Отмена вставки изображения>.|***");
    QImage image(fileName);
    canvas->item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    canvas->m_scene.addItem(canvas->item);
}

void MainWindow::on_Clear_line_triggered()
{
    canvas->m_line->~Line();
}

void MainWindow::on_Clear_figure_triggered()
{
    canvas->tempFigure->~Figure();
}

void MainWindow::on_Clear_image_triggered()
{
    delete canvas->item;
}

//Подключение цветов контура

void MainWindow::on_contour_red_1_clicked()
{

    canvas->tempFigure->contour = QColor(255, 0, 0);
}

void MainWindow::on_contour_orange_1_clicked()
{

    canvas->tempFigure->contour = QColor(255, 120, 1);
}

void MainWindow::on_contour_yellow_1_clicked()
{

    canvas->tempFigure->contour = QColor(255, 255, 0);
}

void MainWindow::on_contour_green_1_clicked()
{

    canvas->tempFigure->contour = QColor(85, 170, 0);
}

void MainWindow::on_contour_blue_1_clicked()
{

    canvas->tempFigure->contour = QColor(0, 170, 255);
}


void MainWindow::on_contour_purple_1_clicked()
{

    canvas->tempFigure->contour = QColor(170, 0, 255);
}

void MainWindow::on_contour_pink_1_clicked()
{

    canvas->tempFigure->contour = QColor(255, 0, 255);
}

void MainWindow::on_contour_black_clicked()
{

    canvas->tempFigure->contour = QColor(0, 0, 0);
}

void MainWindow::on_contour_white_clicked()
{

    canvas->tempFigure->contour = QColor(255, 255, 255);
}

void MainWindow::on_contour_red_2up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 65, 1);
}

void MainWindow::on_contour_red_3up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 0, 55);
}

void MainWindow::on_contour_red_4up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 107, 107);
}

void MainWindow::on_contour_red_5up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 155, 135);
}

void MainWindow::on_contour_red_6up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 222, 207);
}

void MainWindow::on_contour_red_2down_clicked()
{

    canvas->tempFigure->contour = QColor(216, 0, 0);
}

void MainWindow::on_contour_red_3down_clicked()
{

    canvas->tempFigure->contour = QColor(193, 0, 45);
}

void MainWindow::on_contour_red_4down_clicked()
{

    canvas->tempFigure->contour = QColor(172, 7, 38);
}

void MainWindow::on_contour_red_5down_clicked()
{

    canvas->tempFigure->contour = QColor(118, 0, 0);
}

void MainWindow::on_contour_red_6down_clicked()
{

    canvas->tempFigure->contour = QColor(60, 0, 0);
}

void MainWindow::on_contour_red_7down_clicked()
{

    canvas->tempFigure->contour = QColor(30, 0, 0);
}

void MainWindow::on_contour_orange_2up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 170, 0);
}

void MainWindow::on_contour_orange_3up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 200, 3);
}

void MainWindow::on_contour_orange_4up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 181, 121);
}

void MainWindow::on_contour_orange_5up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 230, 153);
}

void MainWindow::on_contour_orange_6up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 247, 219);
}

void MainWindow::on_contour_orange_2down_clicked()
{

    canvas->tempFigure->contour = QColor(225, 160, 20);
}

void MainWindow::on_contour_orange_3down_clicked()
{

    canvas->tempFigure->contour = QColor(208, 69, 0);
}

void MainWindow::on_contour_orange_4down_clicked()
{

    canvas->tempFigure->contour = QColor(139, 88, 16);
}

void MainWindow::on_contour_orange_5down_clicked()
{

    canvas->tempFigure->contour = QColor(148, 87, 59);
}

void MainWindow::on_contour_orange_6down_clicked()
{

    canvas->tempFigure->contour = QColor(117, 39, 0);
}

void MainWindow::on_contour_orange_7down_clicked()
{

    canvas->tempFigure->contour = QColor(89, 49, 2);
}

void MainWindow::on_contour_yellow_2up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 238, 3);
}

void MainWindow::on_contour_yellow_3up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 255, 127);
}

void MainWindow::on_contour_yellow_4up_clicked()
{

    canvas->tempFigure->contour = QColor(225, 255, 185);
}

void MainWindow::on_contour_yellow_5up_clicked()
{

    canvas->tempFigure->contour = QColor(247, 255, 162);
}

void MainWindow::on_contour_yellow_6up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 255, 188);
}

void MainWindow::on_contour_yellow_2down_clicked()
{

    canvas->tempFigure->contour = QColor(212, 255, 0);
}

void MainWindow::on_contour_yellow_3down_clicked()
{

    canvas->tempFigure->contour = QColor(222, 222, 0);
}

void MainWindow::on_contour_yellow_4down_clicked()
{

    canvas->tempFigure->contour = QColor(126, 147, 20);
}

void MainWindow::on_contour_yellow_5down_clicked()
{

    canvas->tempFigure->contour = QColor(105, 113, 72);
}

void MainWindow::on_contour_yellow_6down_clicked()
{

    canvas->tempFigure->contour = QColor(66, 66, 0);
}

void MainWindow::on_contour_yellow_7down_clicked()
{

    canvas->tempFigure->contour = QColor(32, 40, 7);
}

void MainWindow::on_contour_green_2up_clicked()
{

    canvas->tempFigure->contour = QColor(0, 255, 0);
}

void MainWindow::on_contour_green_3up_clicked()
{

    canvas->tempFigure->contour = QColor(0, 255, 127);
}

void MainWindow::on_contour_green_4up_clicked()
{

    canvas->tempFigure->contour = QColor(0, 255, 191);
}

void MainWindow::on_contour_green_5up_clicked()
{

    canvas->tempFigure->contour = QColor(176, 255, 202);
}

void MainWindow::on_contour_green_6up_clicked()
{

    canvas->tempFigure->contour = QColor(235, 255, 231);
}

void MainWindow::on_contour_green_2down_clicked()
{

    canvas->tempFigure->contour = QColor(33, 177, 86);
}

void MainWindow::on_contour_green_3down_clicked()
{

    canvas->tempFigure->contour = QColor(85, 170, 127);
}

void MainWindow::on_contour_green_4down_clicked()
{

    canvas->tempFigure->contour = QColor(57, 121, 73);
}

void MainWindow::on_contour_green_5down_clicked()
{

    canvas->tempFigure->contour = QColor(0, 99, 33);
}

void MainWindow::on_contour_green_6down_clicked()
{

    canvas->tempFigure->contour = QColor(0, 68, 42);
}

void MainWindow::on_contour_green_7down_clicked()
{

    canvas->tempFigure->contour = QColor(31, 61, 0);
}

void MainWindow::on_contour_blue_2up_clicked()
{

    canvas->tempFigure->contour = QColor(147, 214, 255);
}

void MainWindow::on_contour_blue_3up_clicked()
{

    canvas->tempFigure->contour = QColor(52, 228, 255);
}

void MainWindow::on_contour_blue_4up_clicked()
{

    canvas->tempFigure->contour = QColor(85, 255, 255);
}

void MainWindow::on_contour_blue_5up_clicked()
{

    canvas->tempFigure->contour = QColor(216, 248, 255);
}

void MainWindow::on_contour_blue_6up_clicked()
{

    canvas->tempFigure->contour = QColor(221, 236, 255);
}

void MainWindow::on_contour_blue_2down_clicked()
{

    canvas->tempFigure->contour = QColor(84, 124, 255);
}

void MainWindow::on_contour_blue_3down_clicked()
{

    canvas->tempFigure->contour = QColor(17, 88, 255);
}

void MainWindow::on_contour_blue_4down_clicked()
{

    canvas->tempFigure->contour = QColor(0, 0, 255);
}

void MainWindow::on_contour_blue_5down_clicked()
{

    canvas->tempFigure->contour = QColor(0, 0, 122);
}

void MainWindow::on_contour_blue_6down_clicked()
{

    canvas->tempFigure->contour = QColor(0, 47, 71);
}

void MainWindow::on_contour_blue_7down_clicked()
{

    canvas->tempFigure->contour = QColor(0, 0, 59);
}

void MainWindow::on_contour_purple_2up_clicked()
{

    canvas->tempFigure->contour = QColor(170, 0, 127);
}

void MainWindow::on_contour_purple_3up_clicked()
{

    canvas->tempFigure->contour = QColor(170, 85, 255);
}

void MainWindow::on_contour_purple_4up_clicked()
{

    canvas->tempFigure->contour = QColor(170, 170, 255);
}

void MainWindow::on_contour_purple_5up_clicked()
{

    canvas->tempFigure->contour = QColor(224, 210, 255);
}

void MainWindow::on_contour_purple_6up_clicked()
{

    canvas->tempFigure->contour = QColor(248, 233, 255);
}

void MainWindow::on_contour_purple_2down_clicked()
{

    canvas->tempFigure->contour = QColor(201, 58, 220);
}

void MainWindow::on_contour_purple_3down_clicked()
{

    canvas->tempFigure->contour = QColor(85, 0, 127);
}

void MainWindow::on_contour_purple_4down_clicked()
{

    canvas->tempFigure->contour = QColor(85, 0, 255);
}

void MainWindow::on_contour_purple_5down_clicked()
{

    canvas->tempFigure->contour = QColor(86, 0, 65);
}

void MainWindow::on_contour_purple_6down_clicked()
{

    canvas->tempFigure->contour = QColor(51, 4, 61);
}

void MainWindow::on_contour_purple_7down_clicked()
{

    canvas->tempFigure->contour = QColor(33, 0, 49);
}

void MainWindow::on_contour_pink_2up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 85, 127);
}

void MainWindow::on_contour_pink_3up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 120, 145);
}

void MainWindow::on_contour_pink_4up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 170, 255);
}

void MainWindow::on_contour_pink_5up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 212, 236);
}

void MainWindow::on_contour_pink_6up_clicked()
{

    canvas->tempFigure->contour = QColor(255, 244, 255);
}

void MainWindow::on_contour_pink_2down_clicked()
{

    canvas->tempFigure->contour = QColor(255, 85, 255);
}

void MainWindow::on_contour_pink_3down_clicked()
{

    canvas->tempFigure->contour = QColor(255, 0, 127);
}

void MainWindow::on_contour_pink_4down_clicked()
{

    canvas->tempFigure->contour = QColor(177, 0, 71);
}

void MainWindow::on_contour_pink_5down_clicked()
{

    canvas->tempFigure->contour = QColor(158, 74, 94);
}

void MainWindow::on_contour_pink_6down_clicked()
{

    canvas->tempFigure->contour = QColor(107, 62, 82);
}

void MainWindow::on_contour_pink_7down_clicked()
{

    canvas->tempFigure->contour = QColor(111, 0, 56);
}

void MainWindow::on_contour_gray_clicked()
{

    canvas->tempFigure->contour = QColor(131, 131, 131);
}

void MainWindow::on_contour_gray_1right_clicked()
{

    canvas->tempFigure->contour = QColor(179, 179, 179);
}

void MainWindow::on_contour_gray_2right_clicked()
{

    canvas->tempFigure->contour = QColor(225, 225, 225);
}

void MainWindow::on_contour_gray_1left_clicked()
{

    canvas->tempFigure->contour = QColor(83, 83, 83);
}

void MainWindow::on_contour_gray_2left_clicked()
{

    canvas->tempFigure->contour = QColor(40, 40, 40);
}
// Подключение цветов для заливки фигур

void MainWindow::on_back_red_1_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 0, 0);
}

void MainWindow::on_back_orange_1_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 120, 1);
}

void MainWindow::on_back_yellow_1_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 255, 0);
}

void MainWindow::on_back_green_1_clicked()
{

    canvas->tempFigure->back_color = QColor(85, 170, 0);
}

void MainWindow::on_back_blue_1_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 170, 255);
}


void MainWindow::on_back_purple_1_clicked()
{

    canvas->tempFigure->back_color = QColor(170, 0, 255);
}

void MainWindow::on_back_pink_1_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 0, 255);
}

void MainWindow::on_back_black_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 0, 0);
}

void MainWindow::on_back_white_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 255, 255);
}

void MainWindow::on_back_red_2up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 65, 1);
}

void MainWindow::on_back_red_3up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 0, 55);
}

void MainWindow::on_back_red_4up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 107, 107);
}

void MainWindow::on_back_red_5up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 155, 135);
}

void MainWindow::on_back_red_6up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 222, 207);
}

void MainWindow::on_back_red_2down_clicked()
{

    canvas->tempFigure->back_color = QColor(216, 0, 0);
}

void MainWindow::on_back_red_3down_clicked()
{

    canvas->tempFigure->back_color = QColor(193, 0, 45);
}

void MainWindow::on_back_red_4down_clicked()
{

    canvas->tempFigure->back_color = QColor(172, 7, 38);
}

void MainWindow::on_back_red_5down_clicked()
{

    canvas->tempFigure->back_color = QColor(118, 0, 0);
}

void MainWindow::on_back_red_6down_clicked()
{

    canvas->tempFigure->back_color = QColor(60, 0, 0);
}

void MainWindow::on_back_red_7down_clicked()
{

    canvas->tempFigure->back_color = QColor(30, 0, 0);
}

void MainWindow::on_back_orange_2up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 170, 0);
}

void MainWindow::on_back_orange_3up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 200, 3);
}

void MainWindow::on_back_orange_4up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 181, 121);
}

void MainWindow::on_back_orange_5up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 230, 153);
}

void MainWindow::on_back_orange_6up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 247, 219);
}

void MainWindow::on_back_orange_2down_clicked()
{

    canvas->tempFigure->back_color = QColor(225, 160, 20);
}

void MainWindow::on_back_orange_3down_clicked()
{

    canvas->tempFigure->back_color = QColor(208, 69, 0);
}

void MainWindow::on_back_orange_4down_clicked()
{

    canvas->tempFigure->back_color = QColor(139, 88, 16);
}

void MainWindow::on_back_orange_5down_clicked()
{

    canvas->tempFigure->back_color = QColor(148, 87, 59);
}

void MainWindow::on_back_orange_6down_clicked()
{

    canvas->tempFigure->back_color = QColor(117, 39, 0);
}

void MainWindow::on_back_orange_7down_clicked()
{

    canvas->tempFigure->back_color = QColor(89, 49, 2);
}

void MainWindow::on_back_yellow_2up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 238, 3);
}

void MainWindow::on_back_yellow_3up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 255, 127);
}

void MainWindow::on_back_yellow_4up_clicked()
{

    canvas->tempFigure->back_color = QColor(225, 255, 185);
}

void MainWindow::on_back_yellow_5up_clicked()
{

    canvas->tempFigure->back_color = QColor(247, 255, 162);
}

void MainWindow::on_back_yellow_6up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 255, 188);
}

void MainWindow::on_back_yellow_2down_clicked()
{

    canvas->tempFigure->back_color = QColor(212, 255, 0);
}

void MainWindow::on_back_yellow_3down_clicked()
{

    canvas->tempFigure->back_color = QColor(222, 222, 0);
}

void MainWindow::on_back_yellow_4down_clicked()
{

    canvas->tempFigure->back_color = QColor(126, 147, 20);
}

void MainWindow::on_back_yellow_5down_clicked()
{

    canvas->tempFigure->back_color = QColor(105, 113, 72);
}

void MainWindow::on_back_yellow_6down_clicked()
{

    canvas->tempFigure->back_color = QColor(66, 66, 0);
}

void MainWindow::on_back_yellow_7down_clicked()
{

    canvas->tempFigure->back_color = QColor(32, 40, 7);
}

void MainWindow::on_back_green_2up_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 255, 0);
}

void MainWindow::on_back_green_3up_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 255, 127);
}

void MainWindow::on_back_green_4up_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 255, 191);
}

void MainWindow::on_back_green_5up_clicked()
{

    canvas->tempFigure->back_color = QColor(176, 255, 202);
}

void MainWindow::on_back_green_6up_clicked()
{

    canvas->tempFigure->back_color = QColor(235, 255, 231);
}

void MainWindow::on_back_green_2down_clicked()
{

    canvas->tempFigure->back_color = QColor(33, 177, 86);
}

void MainWindow::on_back_green_3down_clicked()
{

    canvas->tempFigure->back_color = QColor(85, 170, 127);
}

void MainWindow::on_back_green_4down_clicked()
{

    canvas->tempFigure->back_color = QColor(57, 121, 73);
}

void MainWindow::on_back_green_5down_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 99, 33);
}

void MainWindow::on_back_green_6down_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 68, 42);
}

void MainWindow::on_back_green_7down_clicked()
{

    canvas->tempFigure->back_color = QColor(31, 61, 0);
}

void MainWindow::on_back_blue_2up_clicked()
{

    canvas->tempFigure->back_color = QColor(147, 214, 255);
}

void MainWindow::on_back_blue_3up_clicked()
{

    canvas->tempFigure->back_color = QColor(52, 228, 255);
}

void MainWindow::on_back_blue_4up_clicked()
{

    canvas->tempFigure->back_color = QColor(85, 255, 255);
}

void MainWindow::on_back_blue_5up_clicked()
{

    canvas->tempFigure->back_color = QColor(216, 248, 255);
}

void MainWindow::on_back_blue_6up_clicked()
{

    canvas->tempFigure->back_color = QColor(221, 236, 255);
}

void MainWindow::on_back_blue_2down_clicked()
{

    canvas->tempFigure->back_color = QColor(84, 124, 255);
}

void MainWindow::on_back_blue_3down_clicked()
{

    canvas->tempFigure->back_color = QColor(17, 88, 255);
}

void MainWindow::on_back_blue_4down_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 0, 255);
}

void MainWindow::on_back_blue_5down_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 0, 122);
}

void MainWindow::on_back_blue_6down_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 47, 71);
}

void MainWindow::on_back_blue_7down_clicked()
{

    canvas->tempFigure->back_color = QColor(0, 0, 59);
}

void MainWindow::on_back_purple_2up_clicked()
{

    canvas->tempFigure->back_color = QColor(170, 0, 127);
}

void MainWindow::on_back_purple_3up_clicked()
{

    canvas->tempFigure->back_color = QColor(170, 85, 255);
}

void MainWindow::on_back_purple_4up_clicked()
{

    canvas->tempFigure->back_color = QColor(170, 170, 255);
}

void MainWindow::on_back_purple_5up_clicked()
{

    canvas->tempFigure->back_color = QColor(224, 210, 255);
}

void MainWindow::on_back_purple_6up_clicked()
{

    canvas->tempFigure->back_color = QColor(248, 233, 255);
}

void MainWindow::on_back_purple_2down_clicked()
{

    canvas->tempFigure->back_color = QColor(201, 58, 220);
}

void MainWindow::on_back_purple_3down_clicked()
{

    canvas->tempFigure->back_color = QColor(85, 0, 127);
}

void MainWindow::on_back_purple_4down_clicked()
{

    canvas->tempFigure->back_color = QColor(85, 0, 255);
}

void MainWindow::on_back_purple_5down_clicked()
{

    canvas->tempFigure->back_color = QColor(86, 0, 65);
}

void MainWindow::on_back_purple_6down_clicked()
{

    canvas->tempFigure->back_color = QColor(51, 4, 61);
}

void MainWindow::on_back_purple_7down_clicked()
{

    canvas->tempFigure->back_color = QColor(33, 0, 49);
}

void MainWindow::on_back_pink_2up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 85, 127);
}

void MainWindow::on_back_pink_3up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 120, 145);
}

void MainWindow::on_back_pink_4up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 170, 255);
}

void MainWindow::on_back_pink_5up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 212, 236);
}

void MainWindow::on_back_pink_6up_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 244, 255);
}

void MainWindow::on_back_pink_2down_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 85, 255);
}

void MainWindow::on_back_pink_3down_clicked()
{

    canvas->tempFigure->back_color = QColor(255, 0, 127);
}

void MainWindow::on_back_pink_4down_clicked()
{

    canvas->tempFigure->back_color = QColor(177, 0, 71);
}

void MainWindow::on_back_pink_5down_clicked()
{

    canvas->tempFigure->back_color = QColor(158, 74, 94);
}

void MainWindow::on_back_pink_6down_clicked()
{

    canvas->tempFigure->back_color = QColor(107, 62, 82);
}

void MainWindow::on_back_pink_7down_clicked()
{

    canvas->tempFigure->back_color = QColor(111, 0, 56);
}

void MainWindow::on_back_gray_clicked()
{

    canvas->tempFigure->back_color = QColor(131, 131, 131);
}

void MainWindow::on_back_gray_1right_clicked()
{

    canvas->tempFigure->back_color = QColor(179, 179, 179);
}

void MainWindow::on_back_gray_2right_clicked()
{

    canvas->tempFigure->back_color = QColor(225, 225, 225);
}

void MainWindow::on_back_gray_1left_clicked()
{

    canvas->tempFigure->back_color = QColor(83, 83, 83);
}

void MainWindow::on_back_gray_2left_clicked()
{

    canvas->tempFigure->back_color = QColor(40, 40, 40);
}

void MainWindow::on_Paint_triggered()
{
    QMessageBox::information(this, "Справка", "|***Перед началом работы зажмите левую кнопку мыши, чтобы провести произвольную линию.***| "
                                              " |***Зажмите правую кнопку мыши, чтобы включить ластик и стереть нарисованное.***| "
                                              " |***Если вы в начале работы хотите сразу добавить фигуру, не рисуя произвольных линий, то "
                                              "пожалуйста, выберите в графе <цвета кисти> белый цвет и проведите произвольную линию, "
                                              "зажав левую кнопку мыши. Далее выберите в графе <фигуры> нужную вам фигуру и уже добавьте её на экран.***|");
}

void MainWindow::on_Add_figure_triggered()
{
    QMessageBox::information(this, "Справка", "|***В графе <фигуры> нажмите на ту, которая вам нужна. Далее зажмите любую кнопку мыши и растяните "
                                              "полученную фигуру. При этом возможно появление лишних полос от вращения фигуры, их можно убрать с помощью "
                                              "клавиш на клавиатуре: W, A, S, D, которые позволяют перемещать последнюю из нарисованных вами фигур в любое место"
                                              " белого листа. То есть чтобы убрать лишние полосы, необходимо навести на них вашу фигуру клавишами, описанными выше.|***");
}

void MainWindow::on_Color_figure_triggered()
{
    QMessageBox::information(this, "Справка", "|***Вы можете изменить либо контур фигуры (для этого в графе <цвета контура фигур> выберите подходящий цвет "
                                              "и счёлкните левой кнопкой мыши рядом с вашей фигурой, цвет контура последней нарисованной фигуры изменится), "
                                              "либо добавить заливку фигуре (для этого в графе <цвета заливки фигур> выберите подходящий цвет и счёлкните "
                                              "левой кнопкой мыши рядом с вашей фигурой, заливка последней нарисованной фигуры изменится). Важная оговорка!!! "
                                              "Перед тем как менять цвет контура или заливки убедитесь, что ваша фигура уже расположена в нужном месте на белом листе"
                                              " (вы можете переместите её с помощью клавиш: W, A, S, D), иначе вы не сможете её больше перемещать.|***");
}

void MainWindow::on_Delete_triggered()
{
    QMessageBox::information(this, "Справка", "|***Вы можете быстро удалить последнюю нарисованную линию или фигуру, если она вам не понравилась. Для этого"
                                              " воспользуйтесь графой <Лист> в левом верхнем углу приложения. Данные кнопки могут удалять только что нарисовааные "
                                              "фигуры и линии. Предыдущие фигуры и линни они удалять не могут, поэтому их вы можете стереть с помощью ластика, "
                                              "кликнув на конпку <кисть> и зажав правую кнопку мыши.|***");
}

void MainWindow::on_Color_brush_triggered()
{
    QMessageBox::information(this, "Справка", "|***Чтобы изменить цвет кисти кликните на кнопку <кисть> и в графе <цвета кисти> выберите нужный цвет.|***");
}
