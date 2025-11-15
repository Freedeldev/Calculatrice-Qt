#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    ui->Affichage->setPlainText("0");
    Affiche ="0";

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Btn1_clicked()
{



    if (Affiche=="0"){
        Affiche = "1";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "1";
        ui->Affichage->setPlainText(Affiche);

    }


}


void MainWindow::on_Btn2_clicked()
{
    //QString Affiche = ui->Affichage->toPlainText();

    if (Affiche=="0"){
        Affiche = "2";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "2";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_Btn3_clicked()
{
    if (Affiche=="0"){
        Affiche = "3";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "3";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_Btn4_clicked()
{
    if (Affiche=="0"){
        Affiche = "4";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "4";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_Btn5_clicked()
{
    if (Affiche=="0"){
        Affiche = "5";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "5";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_Btn6_clicked()
{
    if (Affiche=="0"){
        Affiche = "6";
        ui->Affichage->setText(Affiche);
    }
    else{
       Affiche += "6";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_Btn7_clicked()
{
    if (Affiche=="0"){
        Affiche = "7";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "7";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_Btn8_clicked()
{
    if (Affiche=="0"){
        Affiche = "8";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "8";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_Btn9_clicked()
{
    if (Affiche=="0"){
        Affiche = "9";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "9";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_Btn0_clicked()
{
    if (Affiche=="0"){
        Affiche = "0";
        ui->Affichage->setText(Affiche);
    }
    else{
        Affiche += "0";
        ui->Affichage->setPlainText(Affiche);

    }
}


void MainWindow::on_BtnEfface_clicked()
{
    Affiche="0";
    ui->Affichage->setPlainText(Affiche);
    VerifyComa=false;
}


void MainWindow::on_BtnPoint_clicked()
{

    if (VerifyComa==false){
        Affiche +=".";
        ui->Affichage->setPlainText(Affiche);
        VerifyComa=true;
    }
}


void MainWindow::on_BtnBack_clicked()
{
    if(!Affiche.isEmpty()){
        Affiche.remove(Affiche.length()-1,1);
        VerifyComa=false;

    }

    if(Affiche.isEmpty()){
        Affiche="0";
        VerifyComa=false;
    }

    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_BtnPlusouMoin_clicked()
{
    double Valeur=Affiche.toDouble();
    if(Valeur >= 0){

        Affiche= QString::number(-Valeur,'g',15);
    }
    else{
         Affiche= QString::number(-Valeur,'g',15);
    }
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_BtnSom_clicked()
{
    double valeur=Affiche.toDouble();
    Affiche="0";
    somme+=valeur;
    ui->Affichage->setPlainText(Affiche);
    VerifyComa=false;

}


void MainWindow::on_BtnResultat_clicked()
{
    somme+=Affiche.toDouble();
    Affiche=QString::number(somme,'g',10);
    ui->Affichage->setPlainText(Affiche);
    somme=0;

}

