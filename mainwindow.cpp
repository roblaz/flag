#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene;
    ui->graphicsView->setScene(scene);
    x = y =0;
    drawOriginal();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_radioButton_Gren_clicked()
{
    drawNight();
    /*
    //qDebug() << __PRETTY_FUNCTION__;
    x+=30;
    y+=50;
    QPen outlinePen(Qt::blue );
    QBrush greenBrush(Qt::green);

    qDebug() << "x= " << x << "  y= " << y;
    rec->setBrush(greenBrush);

    QBrush brFromRec;
    brFromRec = rec->brush();

    QColor colFromBrush;
    colFromBrush = brFromRec.color();
    colFromBrush.setAlpha(42);

    qDebug() << "Cololr" << colFromBrush;
    //scene->addRect(x, y, 50, 50, outlinePen, greenBrush);
    */
}

/*
void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    qDebug() << __PRETTY_FUNCTION__ << " value " << value;

}
*/




void MainWindow::on_radioButton_Orig_clicked()
{
    drawOriginal();
}

void MainWindow::drawOriginal() {
    QPen outlinePen(Qt::black);
    QBrush blueBrush(QColor(0,0,255));
    QBrush blackBrush(QColor(0,0,0,255));
    QBrush brownBrush(QColor(128,0,0));

    ui->graphicsView->setBackgroundBrush(QBrush(Qt::white, Qt::SolidPattern));
    //line = scene->addLine(20,20, 200, 20, QPen(Qt::DotLine));
    //text = scene->addText("Hello Scene", QFont("Times", 10, QFont::Bold) );
    rec1 = scene->addRect(x, y, 80, 25, outlinePen, blueBrush);
    rec2 = scene->addRect(x, y+20, 80, 25, outlinePen, blackBrush);
    rec3 = scene->addRect(x, y+40, 80, 25, outlinePen);
    rec4 = scene->addRect(x, y, 7, 130, outlinePen, brownBrush);
    //rec->setFlag(QGraphicsItem::ItemIsMovable);

    //qDebug() << __PRETTY_FUNCTION__;
}

void MainWindow::drawNight()
{
    QPen outlinePen(Qt::black);
    outlinePen.setStyle(Qt::DotLine);
    outlinePen.setBrush(Qt::white);
    QBrush blueBrush(QColor(0,0,255));
    QBrush blackBrush(QColor(0,0,0,255));
    QBrush brownBrush(QColor(128,0,0));
    QBrush whiteBrush(QColor(255,255,255));

    ui->graphicsView->setBackgroundBrush(QBrush(Qt::black, Qt::SolidPattern));
    rec1 = scene->addRect(x, y, 80, 25, outlinePen, blueBrush);
    rec2 = scene->addRect(x, y+20, 80, 25, outlinePen, blackBrush);
    rec3 = scene->addRect(x, y+40, 80, 25, outlinePen, whiteBrush);
    rec4 = scene->addRect(x, y, 7, 130, outlinePen, brownBrush);
    qDebug() << "Night button is pressed";

    /*
    x=0;
    y=0;
    int width = 50;
    int heigth = 100;
    int green = 250;

    QBrush brush;
    QColor color(50,green,50);
    brush.setColor(color);
    brush.setStyle(Qt::Dense1Pattern);
    brush.setStyle(Qt::SolidPattern);
    qDebug() << brush;

      scene->addRect(x, y, width, heigth, QPen(Qt::DashDotLine), brush);
      x+=10;
      y+=-10;
      width+=7;
      heigth+=20;
      green+=-10;
      color.setGreen(green);
      brush.setColor(color);
    */

}
