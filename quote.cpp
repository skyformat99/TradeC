#include "quote.h"
#include "ui_quote.h"
#include <QFile>

CQuote::CQuote(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CQuote)
{
    ui->setupUi(this);

    QFile file("./qss/quote.qss");
    if (file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QString str = file.readAll();
        setStyleSheet(str);
    }
}

CQuote::~CQuote()
{
    delete ui;
}
