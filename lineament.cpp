#include "lineament.h"
#include "ui_lineament.h"

Lineament::Lineament(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lineament)
{
    ui->setupUi(this);
}

Lineament::~Lineament()
{
    delete ui;
}


