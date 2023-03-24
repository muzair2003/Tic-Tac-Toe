#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QWidget"
#include "QLineEdit"
#include "game.h"
#include <string>
#include <iostream>

#include <QMessageBox>
Game newgame;
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


void MainWindow::on_Top_Left_clicked(bool checked)
{
    if(newgame.WhoTurn() == 1){
        newgame.SetState(Box::X,Box::TL);
        ui->Top_Left->setText("X");
    }
    else{
        newgame.SetState(Box::O,Box::TL);
        ui->Top_Left->setText("O");

    }
    newgame.Switch();

    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);

    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");
        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);

    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }
    ui->Top_Left->setEnabled(false);
}


void MainWindow::on_Mid_Top_clicked(bool checked)
{

    if(newgame.WhoTurn() == 1){
        newgame.SetState(Box::X,Box::TM);
        ui->Mid_Top->setText("X");
    }
    else{

        newgame.SetState(Box::O,Box::TM);
        ui->Mid_Top->setText("O");

    }
    newgame.Switch();
    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);
    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");
        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);
    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }

    ui->Mid_Top->setEnabled(false);
}



void MainWindow::on_Top_Right_clicked(bool checked)
{


    if(newgame.WhoTurn() == 1){
        newgame.SetState(Box::X,Box::TR);
        ui->Top_Right->setText("X");
    }
    else{
        newgame.SetState(Box::O,Box::TR);
        ui->Top_Right->setText("O");

    }
    newgame.Switch();
    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);
    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");
        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);
    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }
ui->Top_Right->setEnabled(false);
}



void MainWindow::on_Mid_Left_clicked(bool checked)
{


    if(newgame.WhoTurn() == 1){
        newgame.SetState(Box::X,Box::ML);
        ui->Mid_Left->setText("X");
    }
    else{
        newgame.SetState(Box::O,Box::ML);
        ui->Mid_Left->setText("O");

    }
    newgame.Switch();
    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);
    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");
        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);
    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }
ui->Mid_Left->setEnabled(false);
}



void MainWindow::on_Middle_clicked(bool checked)
{


    if(newgame.WhoTurn() == 1){

        newgame.SetState(Box::X,Box::MM);
        ui->Middle->setText("X");
    }
    else{

        newgame.SetState(Box::O,Box::MM);
        ui->Middle->setText("O");

    }
    newgame.Switch();
    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);

    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");
        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);
    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }
    ui->Middle->setEnabled(false);
}


void MainWindow::on_Bot_Left_clicked(bool checked)
{
    if(newgame.WhoTurn() == 1){

        newgame.SetState(Box::X,Box::BL);
        ui->Bot_Left->setText("X");
    }
    else{

        newgame.SetState(Box::O,Box::BL);
        ui->Bot_Left->setText("O");
    }




    newgame.Switch();
    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);


    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");

        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);
    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }
    ui->Bot_Left->setEnabled(false);
}


void MainWindow::on_Mid_Bot_clicked(bool checked)
{
    if(newgame.WhoTurn() == 1){
        newgame.SetState(Box::X,Box::BM);
        ui->Mid_Bot->setText("X");
    }
    else{
        newgame.SetState(Box::O,Box::BM);
        ui->Mid_Bot->setText("O");
    }



    newgame.Switch();
    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);

    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");
        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);
    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }
    ui->Mid_Bot->setEnabled(false);
}


void MainWindow::on_Bot_Right_clicked(bool checked)
{
    if(newgame.WhoTurn() == 1){


        newgame.SetState(Box::X,Box::BR);
        ui->Bot_Right->setText("X");
    }
    else{


        newgame.SetState(Box::O,Box::BR);
        ui->Bot_Right->setText("O");
    }


    newgame.Switch();
    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);

    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");
        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);

    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }
    ui->Bot_Right->setEnabled(false);
}


void MainWindow::on_Mid_Right_clicked(bool checked)
{
    if(newgame.WhoTurn() == 1){

        newgame.SetState(Box::X,Box::MR);
        ui->Mid_Right->setText("X");
    }
    else{

        newgame.SetState(Box::O,Box::MR);
        ui->Mid_Right->setText("O");
    }


    newgame.Switch();
    std::string s = "Player " + std::to_string(newgame.WhoTurn());
    QString qstr = QString::fromStdString(s);
    ui->lineEdit->setText(qstr);

    if(newgame.end()==1){
        QMessageBox::about(this,"Winner", qstr + " has won");
        ui->Top_Left->setEnabled(false);
        ui->Mid_Top->setEnabled(false);
        ui->Top_Right->setEnabled(false);
        ui->Middle->setEnabled(false);
        ui->Mid_Right->setEnabled(false);
        ui->Mid_Left->setEnabled(false);
        ui->Bot_Left->setEnabled(false);
        ui->Mid_Bot->setEnabled(false);
        ui->Bot_Right->setEnabled(false);
    }
    if(newgame.end()==2){
        QMessageBox::about(this,"Tie","It is a Tie");
    }
    ui->Mid_Right->setEnabled(false);
}



void MainWindow::on_pushButton_pressed()
{
    newgame.reset();
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

