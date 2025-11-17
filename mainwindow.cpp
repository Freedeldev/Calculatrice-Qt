#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "global.h"
#include <QJSEngine>
#include <QJSValue>


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


void Afficher(QString nombreAfficher){

    if (Affiche=="0"){
        Affiche =nombreAfficher;
    }
    else{
        Affiche += nombreAfficher;
    }
}
void MainWindow::on_Btn1_clicked()
{
    Afficher("1");
    ui->Affichage->setPlainText(Affiche);

}


void MainWindow::on_Btn2_clicked()
{
    Afficher("2");
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_Btn3_clicked()
{
    Afficher("3");
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_Btn4_clicked()
{
    Afficher("4");
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_Btn5_clicked()
{
    Afficher("5");
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_Btn6_clicked()
{
    Afficher("6");
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_Btn7_clicked()
{
    Afficher("7");
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_Btn8_clicked()
{
    Afficher("8");
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_Btn9_clicked()
{
    Afficher("9");
    ui->Affichage->setPlainText(Affiche);
}


void MainWindow::on_Btn0_clicked()
{
    Afficher("0");
    ui->Affichage->setPlainText(Affiche);
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
    Affiche += "+";
    ui->Affichage->setPlainText(Affiche);
    VerifyComa = false;
}






void MainWindow::on_BtnSous_clicked()
{
    Affiche += "-";
    ui->Affichage->setPlainText(Affiche);
    VerifyComa = false;
}


void MainWindow::on_BtnMult_clicked()
{
    Affiche += "*";
    ui->Affichage->setPlainText(Affiche);
    VerifyComa = false;
}


void MainWindow::on_BtnDivi_clicked()
{
    Affiche += "/";
    ui->Affichage->setPlainText(Affiche);
    VerifyComa = false;
}


void MainWindow::on_BtnResultat_clicked()
{
    QJSEngine moteur;

    // On évalue l'expression
    QJSValue resultatJS = moteur.evaluate(Affiche);

    // Vérifier si une erreur est survenue
    if (resultatJS.isError()) {
        ui->Affichage->setPlainText("Erreur");
        return;
    }

    // Convertir en double
    double resultat = resultatJS.toNumber();

    // Afficher
    Affiche = QString::number(resultat, 'g', 15);
    ui->Affichage->setPlainText(Affiche);

    // Si tu veux nettoyer VerifyComa
    VerifyComa = false;
}

