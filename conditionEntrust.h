#ifndef CONDITIONENTRUST_H
#define CONDITIONENTRUST_H

#include <QWidget>

namespace Ui {
class CConditionEntrust;
}

class CConditionEntrust : public QWidget
{
    Q_OBJECT

public:
    explicit CConditionEntrust(QWidget *parent = 0);
    ~CConditionEntrust();

    void initData();

private slots:
    void exchangePNImage();
    void exchangeUnitNumImage();
    void exchangeCodeImage();
    void exchangeBSImage();
    void exchangePriceTypeImage();

private:
    Ui::CConditionEntrust *ui;
    bool m_bLockPN;
    bool m_bLockUnitNum;
    bool m_bLockCode;
    bool m_bLockBS;
    bool m_bLockPriceType;

    std::map<QString, int> m_mapSZPriceType;
    std::map<QString, int> m_mapSHPriceType;
};

#endif // CONDITIONENTRUST_H
