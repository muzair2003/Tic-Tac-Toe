#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
{

}

MainWindow::MainWindow(Game* game, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Top_Left_clicked(bool checked)
{

        ui->Top_Left->setText("X");
}


void MainWindow::on_Mid_Top_clicked(bool checked)
{

}


void MainWindow::on_Top_Right_clicked(bool checked)
{

}


void MainWindow::on_Mid_Left_clicked(bool checked)
{

}


void MainWindow::on_Middle_clicked(bool checked)
{

}

void MainWindow::on_Bot_Left_clicked(bool checked)
{

}


void MainWindow::on_Mid_Bot_clicked(bool checked)
{

}


void MainWindow::on_Bot_Right_clicked(bool checked)
{

}


void MainWindow::on_Mid_Right_clicked(bool checked)
{

}

