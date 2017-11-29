#ifndef QUOTE_H
#define QUOTE_H

#include <QWidget>

namespace Ui {
class CQuote;
}

class CQuote : public QWidget
{
    Q_OBJECT

public:
    explicit CQuote(QWidget *parent = 0);
    ~CQuote();

private:
    Ui::CQuote *ui;
};

#endif // QUOTE_H
