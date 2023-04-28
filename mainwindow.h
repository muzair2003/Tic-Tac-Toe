#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "QWidget"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;
    Game *game = new Game(this);
//    void  setButton(QPushButton* button, Box::Pos position);

private slots:


    void on_Top_Left_clicked( );

    void on_Mid_Top_clicked( );

    void on_Top_Right_clicked( );

    void on_Mid_Left_clicked( );

    void on_Middle_clicked( );

    void on_Bot_Left_clicked( );

    void on_Mid_Bot_clicked( );

    void on_Bot_Right_clicked( );

    void on_Mid_Right_clicked( );

    void on_pushButton_pressed();

private:
};
#endif // MAINWINDOW_H
