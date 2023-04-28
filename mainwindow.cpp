#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QWidget"
#include "QLineEdit"
#include <string>
#include <iostream>

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow:: setButton(QPushButton* button, Box::Pos position){
//    if(m_newgame.WhoTurn() == 1){
//        m_newgame.SetState(Box::X,position);
//        button->setText("X");
//    }
//    else{
//        m_newgame.SetState(Box::O,position);
//        button->setText("O");

//    }

//    std::string s = "Player " + std::to_string(m_newgame.WhoTurn());
//    QString qstr = QString::fromStdString(s);
//    ui->lineEdit->setText(qstr);

//    if(m_newgame.end()==1){
//        QMessageBox::about(this,"Winner", qstr + " has won");
//        ui->Top_Left->setEnabled(false);
//        ui->Mid_Top->setEnabled(false);
//        ui->Top_Right->setEnabled(false);
//        ui->Middle->setEnabled(false);
//        ui->Mid_Right->setEnabled(false);
//        ui->Mid_Left->setEnabled(false);
//        ui->Bot_Left->setEnabled(false);
//        ui->Mid_Bot->setEnabled(false);
//        ui->Bot_Right->setEnabled(false);

//    }
//    if(m_newgame.end()==2){
//        QMessageBox::about(this,"Tie","It is a Tie");
//    }
// m_newgame.Switch();
//    button->setEnabled(false);
//}
void MainWindow::on_Top_Left_clicked()
{
game->setButton(Box::TL);
}


void MainWindow::on_Mid_Top_clicked()
{
    game->setButton(Box::TM);
}



void MainWindow::on_Top_Right_clicked( )
{
    game->setButton(Box::TR);
}



void MainWindow::on_Mid_Left_clicked( )
{
game->setButton(Box::ML);
}



void MainWindow::on_Middle_clicked( )
{
    game->setButton(Box::MM);
}


void MainWindow::on_Bot_Left_clicked( )
{
    game->setButton(Box::BL);
}


void MainWindow::on_Mid_Bot_clicked( )
{
game->setButton(Box::BM);
}


void MainWindow::on_Bot_Right_clicked( )
{
    game->setButton(Box::BR);
}


void MainWindow::on_Mid_Right_clicked( )
{
game->setButton(Box::MR);
}



void MainWindow::on_pushButton_pressed()
{
    game->reset();
    ui->Top_Left->setEnabled(true);
    ui->Mid_Top->setEnabled(true);
    ui->Top_Right->setEnabled(true);
    ui->Middle->setEnabled(true);
    ui->Mid_Right->setEnabled(true);
    ui->Mid_Left->setEnabled(true);
    ui->Bot_Left->setEnabled(true);
    ui->Mid_Bot->setEnabled(true);
    ui->Bot_Right->setEnabled(true);

    ui->Top_Left->setText("");
    ui->Mid_Top->setText("");
    ui->Top_Right->setText("");
    ui->Middle->setText("");
    ui->Mid_Right->setText("");
    ui->Mid_Left->setText("");
    ui->Bot_Left->setText("");
    ui->Mid_Bot->setText("");
    ui->Bot_Right->setText("");

    ui->Top_Left->setChecked(false);
    ui->Mid_Top->setChecked(false);
    ui->Top_Right->setChecked(false);
    ui->Middle->setChecked(false);
    ui->Mid_Right->setChecked(false);
    ui->Mid_Left->setChecked(false);
    ui->Bot_Left->setChecked(false);
    ui->Mid_Bot->setChecked(false);
    ui->Bot_Right->setChecked(false);
}

