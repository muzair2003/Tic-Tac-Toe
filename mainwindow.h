#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "QWidget"
#include "qpushbutton.h"
#include "box.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_Top_Left_clicked(bool checked);

    void on_Mid_Top_clicked(bool checked);

    void on_Top_Right_clicked(bool checked);

    void on_Mid_Left_clicked(bool checked);

    void on_Middle_clicked(bool checked);

    void on_Bot_Left_clicked(bool checked);

    void on_Mid_Bot_clicked(bool checked);

    void on_Bot_Right_clicked(bool checked);

    void on_Mid_Right_clicked(bool checked);

    void on_pushButton_pressed();

private:
    void  setButton(QPushButton* button, Box::Pos position);
    Ui::MainWindow *ui;
    Game m_newgame;
};
#endif // MAINWINDOW_H
