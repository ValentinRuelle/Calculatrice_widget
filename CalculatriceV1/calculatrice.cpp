#include "calculatrice.h"
#include "ui_calculatrice.h"
#include <QJSEngine>

Calculatrice::Calculatrice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
}

Calculatrice::~Calculatrice()
{
    delete ui;
}


void Calculatrice::on_pushButton7_clicked()
{
   QString expression = ui->lineEditAfficheur->text();
   ui->lineEditAfficheur->setText(expression + "7");
}


void Calculatrice::on_pushButton8_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "8");
}


void Calculatrice::on_pushButton9_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "9");
}


void Calculatrice::on_pushButtonAdditionner_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "+");
}


void Calculatrice::on_pushButton4_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "4");
}


void Calculatrice::on_pushButton5_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "5");
}


void Calculatrice::on_pushButton6_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "6");
}


void Calculatrice::on_pushButtonSoustraire_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "-");
}


void Calculatrice::on_pushButton1_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "1");
}


void Calculatrice::on_pushButton2_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "2");
}


void Calculatrice::on_pushButton5_2_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "5");
}


void Calculatrice::on_pushButtonMultiplier_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "*");
}


void Calculatrice::on_pushButtonDiviser_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "/");
}


void Calculatrice::on_pushButton0_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(expression + "0");
}


void Calculatrice::on_pushButtonEgal_clicked()
{
    QString expression = ui->lineEditAfficheur->text();
    QJSEngine myEngine;
    QJSValue three = myEngine.evaluate(expression);
    ui->lineEditAfficheur->setText(three.toString());
}

