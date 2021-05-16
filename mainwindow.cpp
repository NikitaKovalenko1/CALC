#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>
#include "CLASS.h"
#include <iomanip>
#include <cmath>

double g, m, s, g1, m1, s1, ch, zn;
int k, buttMenu;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->doubleSpinBox->hide();
    ui->doubleSpinBox_2->hide();
    ui->doubleSpinBox_3->hide();
    ui->doubleSpinBox_4->hide();
    ui->doubleSpinBox_5->hide();
    ui->doubleSpinBox_6->hide();
    ui->doubleSpinBox_7->hide();
    ui->doubleSpinBox_8->hide();
    ui->doubleSpinBox_9->hide();
    ui->doubleSpinBox->clear();
    ui->doubleSpinBox_2->clear();
    ui->doubleSpinBox_3->clear();
    ui->doubleSpinBox_4->clear();
    ui->doubleSpinBox_5->clear();
    ui->doubleSpinBox_6->clear();
    ui->doubleSpinBox_7->clear();
    ui->doubleSpinBox_8->clear();
    ui->doubleSpinBox_9->clear();
    ui->label_3->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    g=arg1;
}
void MainWindow::on_doubleSpinBox_2_valueChanged(double arg1)
{
    m=arg1;
}

void MainWindow::on_doubleSpinBox_3_valueChanged(double arg1)
{
    s=arg1;
}

void MainWindow::on_doubleSpinBox_6_valueChanged(double arg1)
{
    g1=arg1;
}

void MainWindow::on_doubleSpinBox_5_valueChanged(double arg1)
{
    m1=arg1;
}

void MainWindow::on_doubleSpinBox_4_valueChanged(double arg1)
{
    s1=arg1;
}

void MainWindow::on_doubleSpinBox_7_valueChanged(double arg1)
{
    ch = arg1;
}



void MainWindow::on_pushButton_clicked()
{
    buttMenu = 1;
}

void MainWindow::on_pushButton_2_clicked()
{
    buttMenu = 2;
}

void MainWindow::on_pushButton_3_clicked()
{
    buttMenu = 3;
}


void MainWindow::on_pushButton_4_clicked()
{
    buttMenu = 4;
}


void MainWindow::on_pushButton_14_clicked()
{
    if (buttMenu == 1)
    {
        GRAD pl(g, m, s, g1, m1, s1);
        ui->label_3->setText(QVariant(round(pl.plus() * 100) / 100).toString());
    }

    if (buttMenu == 2)
    {
        GRAD min(g, m, s, g1, m1, s1);

        ui->label_3->setText(QVariant(round(min.minus() * 100) / 100).toString());
    }

    if (buttMenu == 3)
    {
        GRAD umno(g, m, s);
        ui->label_3->setText(QVariant(round(umno.mylti(ch) * 100) / 100).toString());
    }

    if (buttMenu == 4)
    {
        GRAD di(g, m, s);
        ui->label_3->setText(QVariant(round(di.div(ch) * 100) / 100).toString());
    }

    if (buttMenu == 5)
    {
        GRAD si(g, m, s);
        ui->label_3->setText(QVariant(round(sin(si.rad()) * 100) / 100).toString());
    }

    if (buttMenu == 6)
    {
        GRAD co(g, m, s);
        ui->label_3->setText(QVariant(round(cos(co.rad()) * 100) / 100).toString());
    }

    if (buttMenu == 7)
    {
        GRAD ta(g, m, s);
        ui->label_3->setText(QVariant(round(tan(ta.rad()) * 100) / 100).toString());
    }

    if (buttMenu == 8)
    {
        GRAD cta(g, m, s);
        ui->label_3->setText(QVariant(round(1/tan(cta.rad()) * 100) / 100).toString());
    }

    if (buttMenu == 9)
    {
        double gradus = asin(zn)*180/acos(-1);
        ui->label_3->setText(QVariant(round(gradus * 100) / 100).toString());
    }

    if (buttMenu == 10)
    {
        double gradus = acos(zn)*180/acos(-1);
        ui->label_3->setText(QVariant(round(gradus * 100) / 100).toString());
    }

    if (buttMenu == 11)
    {
        double gradus = atan(zn)*180/acos(-1);
        ui->label_3->setText(QVariant(round(gradus * 100) / 100).toString());
    }

    if (buttMenu == 12)
    {
        double gradus = (1/atan(zn))*180/acos(-1);
        ui->label_3->setText(QVariant(round(gradus * 100) / 100).toString());
    }

    if (buttMenu == 13)
    {
        GRAD radi(g, m, s);
        ui->label_3->setText(QVariant(round(radi.rad() * 100) / 100).toString());
    }

    g = m = s = g1 = m1 = s1 = ch = zn = 0;
}


void MainWindow::on_pushButton_5_clicked()
{
    buttMenu = 5;
}

void MainWindow::on_pushButton_6_clicked()
{
    buttMenu = 6;
}

void MainWindow::on_pushButton_7_clicked()
{
    buttMenu = 7;
}

void MainWindow::on_pushButton_8_clicked()
{
    buttMenu = 8;
}

void MainWindow::on_pushButton_9_clicked()
{
    buttMenu = 9;
}

void MainWindow::on_pushButton_10_clicked()
{
    buttMenu = 10;
}

void MainWindow::on_pushButton_11_clicked()
{
    buttMenu = 11;
}

void MainWindow::on_pushButton_12_clicked()
{
    buttMenu = 12;
}

void MainWindow::on_pushButton_13_clicked()
{
    buttMenu = 13;
}

void MainWindow::on_doubleSpinBox_8_valueChanged(double arg1)
{
    zn = arg1;
}

void MainWindow::on_doubleSpinBox_9_valueChanged(double arg1)
{
    zn = arg1;
}
