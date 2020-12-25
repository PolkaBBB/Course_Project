#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Scene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int h, w;

private:
    Ui::MainWindow *ui;
    QGraphicsScene  *scene;

public:
    Scene *canvas;
    QString path;

private slots:
    void on_red_1_clicked();
    void on_orange_1_clicked();
    void on_yellow_1_clicked();
    void on_green_1_clicked();
    void on_blue_1_clicked();
    void on_purple_1_clicked();
    void on_pink_1_clicked();
    void on_black_clicked();
    void on_white_clicked();
    void on_red_2up_clicked();
    void on_red_3up_clicked();
    void on_red_4up_clicked();
    void on_red_5up_clicked();
    void on_red_6up_clicked();
    void on_red_2down_clicked();
    void on_red_3down_clicked();
    void on_red_4down_clicked();
    void on_red_5down_clicked();
    void on_red_6down_clicked();
    void on_red_7down_clicked();
    void on_orange_2up_clicked();
    void on_orange_3up_clicked();
    void on_orange_4up_clicked();
    void on_orange_5up_clicked();
    void on_orange_6up_clicked();
    void on_orange_2down_clicked();
    void on_orange_3down_clicked();
    void on_orange_4down_clicked();
    void on_orange_5down_clicked();
    void on_orange_6down_clicked();
    void on_orange_7down_clicked();
    void on_yellow_2up_clicked();
    void on_yellow_3up_clicked();
    void on_yellow_4up_clicked();
    void on_yellow_5up_clicked();
    void on_yellow_6up_clicked();
    void on_yellow_2down_clicked();
    void on_yellow_3down_clicked();
    void on_yellow_4down_clicked();
    void on_yellow_5down_clicked();
    void on_yellow_6down_clicked();
    void on_yellow_7down_clicked();
    void on_green_2up_clicked();
    void on_green_3up_clicked();
    void on_green_4up_clicked();
    void on_green_5up_clicked();
    void on_green_6up_clicked();
    void on_green_2down_clicked();
    void on_green_3down_clicked();
    void on_green_4down_clicked();
    void on_green_5down_clicked();
    void on_green_6down_clicked();
    void on_green_7down_clicked();
    void on_blue_2up_clicked();
    void on_blue_3up_clicked();
    void on_blue_4up_clicked();
    void on_blue_5up_clicked();
    void on_blue_6up_clicked();
    void on_blue_2down_clicked();
    void on_blue_3down_clicked();
    void on_blue_4down_clicked();
    void on_blue_5down_clicked();
    void on_blue_6down_clicked();
    void on_blue_7down_clicked();
    void on_purple_2up_clicked();
    void on_purple_3up_clicked();
    void on_purple_4up_clicked();
    void on_purple_5up_clicked();
    void on_purple_6up_clicked();
    void on_purple_2down_clicked();
    void on_purple_3down_clicked();
    void on_purple_4down_clicked();
    void on_purple_5down_clicked();
    void on_purple_6down_clicked();
    void on_purple_7down_clicked();
    void on_pink_2up_clicked();
    void on_pink_3up_clicked();
    void on_pink_4up_clicked();
    void on_pink_5up_clicked();
    void on_pink_6up_clicked();
    void on_pink_2down_clicked();
    void on_pink_3down_clicked();
    void on_pink_4down_clicked();
    void on_pink_5down_clicked();
    void on_pink_6down_clicked();
    void on_pink_7down_clicked();
    void on_gray_clicked();
    void on_gray_1right_clicked();
    void on_gray_2right_clicked();
    void on_gray_1left_clicked();
    void on_gray_2left_clicked();
    // подключение фигур и прочего функционала
    void on_Brush_clicked();
    void on_AddRomb_clicked();
    void on_AddSquare_clicked();
    void on_AddTriangle_clicked();
    void on_AddEllipse_clicked();
    void on_Exit_triggered();
    void on_Save_triggered();
    void on_Insert_triggered();
    void on_Clear_line_triggered();
    void on_Clear_figure_triggered();
    void on_Clear_image_triggered();
    //подключение цветов контура
    void on_contour_red_1_clicked();
    void on_contour_orange_1_clicked();
    void on_contour_yellow_1_clicked();
    void on_contour_green_1_clicked();
    void on_contour_blue_1_clicked();
    void on_contour_purple_1_clicked();
    void on_contour_pink_1_clicked();
    void on_contour_black_clicked();
    void on_contour_white_clicked();
    void on_contour_red_2up_clicked();
    void on_contour_red_3up_clicked();
    void on_contour_red_4up_clicked();
    void on_contour_red_5up_clicked();
    void on_contour_red_6up_clicked();
    void on_contour_red_2down_clicked();
    void on_contour_red_3down_clicked();
    void on_contour_red_4down_clicked();
    void on_contour_red_5down_clicked();
    void on_contour_red_6down_clicked();
    void on_contour_red_7down_clicked();
    void on_contour_orange_2up_clicked();
    void on_contour_orange_3up_clicked();
    void on_contour_orange_4up_clicked();
    void on_contour_orange_5up_clicked();
    void on_contour_orange_6up_clicked();
    void on_contour_orange_2down_clicked();
    void on_contour_orange_3down_clicked();
    void on_contour_orange_4down_clicked();
    void on_contour_orange_5down_clicked();
    void on_contour_orange_6down_clicked();
    void on_contour_orange_7down_clicked();
    void on_contour_yellow_2up_clicked();
    void on_contour_yellow_3up_clicked();
    void on_contour_yellow_4up_clicked();
    void on_contour_yellow_5up_clicked();
    void on_contour_yellow_6up_clicked();
    void on_contour_yellow_2down_clicked();
    void on_contour_yellow_3down_clicked();
    void on_contour_yellow_4down_clicked();
    void on_contour_yellow_5down_clicked();
    void on_contour_yellow_6down_clicked();
    void on_contour_yellow_7down_clicked();
    void on_contour_green_2up_clicked();
    void on_contour_green_3up_clicked();
    void on_contour_green_4up_clicked();
    void on_contour_green_5up_clicked();
    void on_contour_green_6up_clicked();
    void on_contour_green_2down_clicked();
    void on_contour_green_3down_clicked();
    void on_contour_green_4down_clicked();
    void on_contour_green_5down_clicked();
    void on_contour_green_6down_clicked();
    void on_contour_green_7down_clicked();
    void on_contour_blue_2up_clicked();
    void on_contour_blue_3up_clicked();
    void on_contour_blue_4up_clicked();
    void on_contour_blue_5up_clicked();
    void on_contour_blue_6up_clicked();
    void on_contour_blue_2down_clicked();
    void on_contour_blue_3down_clicked();
    void on_contour_blue_4down_clicked();
    void on_contour_blue_5down_clicked();
    void on_contour_blue_6down_clicked();
    void on_contour_blue_7down_clicked();
    void on_contour_purple_2up_clicked();
    void on_contour_purple_3up_clicked();
    void on_contour_purple_4up_clicked();
    void on_contour_purple_5up_clicked();
    void on_contour_purple_6up_clicked();
    void on_contour_purple_2down_clicked();
    void on_contour_purple_3down_clicked();
    void on_contour_purple_4down_clicked();
    void on_contour_purple_5down_clicked();
    void on_contour_purple_6down_clicked();
    void on_contour_purple_7down_clicked();
    void on_contour_pink_2up_clicked();
    void on_contour_pink_3up_clicked();
    void on_contour_pink_4up_clicked();
    void on_contour_pink_5up_clicked();
    void on_contour_pink_6up_clicked();
    void on_contour_pink_2down_clicked();
    void on_contour_pink_3down_clicked();
    void on_contour_pink_4down_clicked();
    void on_contour_pink_5down_clicked();
    void on_contour_pink_6down_clicked();
    void on_contour_pink_7down_clicked();
    void on_contour_gray_clicked();
    void on_contour_gray_1right_clicked();
    void on_contour_gray_2right_clicked();
    void on_contour_gray_1left_clicked();
    void on_contour_gray_2left_clicked();
    // Подключение цветов для заливки фигур
    void on_back_red_1_clicked();
    void on_back_orange_1_clicked();
    void on_back_yellow_1_clicked();
    void on_back_green_1_clicked();
    void on_back_blue_1_clicked();
    void on_back_purple_1_clicked();
    void on_back_pink_1_clicked();
    void on_back_black_clicked();
    void on_back_white_clicked();
    void on_back_red_2up_clicked();
    void on_back_red_3up_clicked();
    void on_back_red_4up_clicked();
    void on_back_red_5up_clicked();
    void on_back_red_6up_clicked();
    void on_back_red_2down_clicked();
    void on_back_red_3down_clicked();
    void on_back_red_4down_clicked();
    void on_back_red_5down_clicked();
    void on_back_red_6down_clicked();
    void on_back_red_7down_clicked();
    void on_back_orange_2up_clicked();
    void on_back_orange_3up_clicked();
    void on_back_orange_4up_clicked();
    void on_back_orange_5up_clicked();
    void on_back_orange_6up_clicked();
    void on_back_orange_2down_clicked();
    void on_back_orange_3down_clicked();
    void on_back_orange_4down_clicked();
    void on_back_orange_5down_clicked();
    void on_back_orange_6down_clicked();
    void on_back_orange_7down_clicked();
    void on_back_yellow_2up_clicked();
    void on_back_yellow_3up_clicked();
    void on_back_yellow_4up_clicked();
    void on_back_yellow_5up_clicked();
    void on_back_yellow_6up_clicked();
    void on_back_yellow_2down_clicked();
    void on_back_yellow_3down_clicked();
    void on_back_yellow_4down_clicked();
    void on_back_yellow_5down_clicked();
    void on_back_yellow_6down_clicked();
    void on_back_yellow_7down_clicked();
    void on_back_green_2up_clicked();
    void on_back_green_3up_clicked();
    void on_back_green_4up_clicked();
    void on_back_green_5up_clicked();
    void on_back_green_6up_clicked();
    void on_back_green_2down_clicked();
    void on_back_green_3down_clicked();
    void on_back_green_4down_clicked();
    void on_back_green_5down_clicked();
    void on_back_green_6down_clicked();
    void on_back_green_7down_clicked();
    void on_back_blue_2up_clicked();
    void on_back_blue_3up_clicked();
    void on_back_blue_4up_clicked();
    void on_back_blue_5up_clicked();
    void on_back_blue_6up_clicked();
    void on_back_blue_2down_clicked();
    void on_back_blue_3down_clicked();
    void on_back_blue_4down_clicked();
    void on_back_blue_5down_clicked();
    void on_back_blue_6down_clicked();
    void on_back_blue_7down_clicked();
    void on_back_purple_2up_clicked();
    void on_back_purple_3up_clicked();
    void on_back_purple_4up_clicked();
    void on_back_purple_5up_clicked();
    void on_back_purple_6up_clicked();
    void on_back_purple_2down_clicked();
    void on_back_purple_3down_clicked();
    void on_back_purple_4down_clicked();
    void on_back_purple_5down_clicked();
    void on_back_purple_6down_clicked();
    void on_back_purple_7down_clicked();
    void on_back_pink_2up_clicked();
    void on_back_pink_3up_clicked();
    void on_back_pink_4up_clicked();
    void on_back_pink_5up_clicked();
    void on_back_pink_6up_clicked();
    void on_back_pink_2down_clicked();
    void on_back_pink_3down_clicked();
    void on_back_pink_4down_clicked();
    void on_back_pink_5down_clicked();
    void on_back_pink_6down_clicked();
    void on_back_pink_7down_clicked();
    void on_back_gray_clicked();
    void on_back_gray_1right_clicked();
    void on_back_gray_2right_clicked();
    void on_back_gray_1left_clicked();
    void on_back_gray_2left_clicked();
    void on_Paint_triggered();
    void on_Add_figure_triggered();
    void on_Color_figure_triggered();
    void on_Delete_triggered();
    void on_Color_brush_triggered();
};

#endif // MAINWINDOW_H