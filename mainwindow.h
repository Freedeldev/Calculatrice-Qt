#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double Operation();



private slots:
    void on_Btn1_clicked();

    void on_Btn2_clicked();

    void on_Btn3_clicked();

    void on_Btn4_clicked();

    void on_Btn5_clicked();

    void on_Btn6_clicked();

    void on_Btn7_clicked();

    void on_Btn8_clicked();

    void on_Btn9_clicked();

    void on_Btn0_clicked();

    void on_BtnEfface_clicked();

    void on_BtnPoint_clicked();

    void on_BtnBack_clicked();

    void on_BtnPlusouMoin_clicked();

    void on_BtnSom_clicked();

    void on_BtnResultat_clicked();

    void on_BtnSous_clicked();

    void on_BtnMult_clicked();

    void on_BtnDivi_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
