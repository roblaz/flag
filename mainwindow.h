#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDebug>

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_radioButton_Gren_clicked();
    void drawNight();
    void drawOriginal();

    void on_radioButton_Orig_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *rec1, *rec2, *rec3, *rec4;
    QGraphicsLineItem *line;
    QGraphicsTextItem *text;

    int x;
    int y;

};

#endif // MAINWINDOW_H
