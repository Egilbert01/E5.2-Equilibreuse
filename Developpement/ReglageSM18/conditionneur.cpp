#include "conditionneur.h"
#include "ui_conditionneur.h"

Conditionneur::Conditionneur(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Conditionneur)
{
    ui->setupUi(this);
}

Conditionneur::~Conditionneur()
{
    delete ui;
}
void Conditionneur::on_pushButton_quitter_clicked()
{
    close();
}


void Conditionneur::on_pushButton_lancerMesure_clicked()
{

}

