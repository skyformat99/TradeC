#ifndef NORMALENTRUST_H
#define NORMALENTRUST_H

#include <QWidget>
#include <map>

namespace Ui {
class CNormalEntrust;
}

class CNormalEntrust : public QWidget
{
    Q_OBJECT

public:
    explicit CNormalEntrust(QWidget *parent = 0);
    ~CNormalEntrust();

    void initData();

private slots:
    void exchangePNImage();
    void exchangeUnitNumImage();
    void exchangeCodeImage();
    void exchangeBSImage();
    void exchangePriceTypeImage();

private:
    Ui::CNormalEntrust *ui;
    bool m_bLockPN;
    bool m_bLockUnitNum;
    bool m_bLockCode;
    bool m_bLockBS;
    bool m_bLockPriceType;

    std::map<QString, int> m_mapSZPriceType;
    std::map<QString, int> m_mapSHPriceType;

};

#endif // NORMALENTRUST_H
