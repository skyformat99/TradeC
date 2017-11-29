/********************************************************************************
** Form generated from reading UI file 'normalEntrust.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMALENTRUST_H
#define UI_NORMALENTRUST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "labelClick.h"

QT_BEGIN_NAMESPACE

class Ui_CNormalEntrust
{
public:
    QLabel *labelProductNumber;
    QComboBox *cboProductNumber;
    CLabelClick *labelLockPN;
    QLabel *labelUnitNum;
    QComboBox *cboUnitNum;
    CLabelClick *labelLockUnitNum;
    QLabel *labelCode;
    QLineEdit *lineEditCode;
    CLabelClick *labelLockCode;
    QLabel *labelBS;
    QComboBox *cboBS;
    CLabelClick *labelLockBS;
    QComboBox *cboPriceType;
    CLabelClick *labelLockPriceType;
    QLabel *labelPriceType;
    QLabel *labelEntrustPrice;
    QDoubleSpinBox *dsbEntrustPrice;
    QLabel *labelPriceUnit;
    QLabel *labelEntrustPrice_2;
    QLineEdit *lineEditName;
    QLabel *labelSellQty;
    QLabel *labelSellQtyUnide;
    QPushButton *btnSellQtyPercentage;
    QLabel *labelPriceUnit_2;
    QSpinBox *sbEntrustQty;
    QLabel *labelEntrustAmountUnit;
    QLabel *labelEntrustQty_2;
    QLabel *labelEntrustAmount;
    QLabel *labelOption;
    QPushButton *btnEntrust;
    QComboBox *cboType;
    QPushButton *btnReset;
    QLabel *labelEntrustQty;

    void setupUi(QWidget *CNormalEntrust)
    {
        if (CNormalEntrust->objectName().isEmpty())
            CNormalEntrust->setObjectName(QStringLiteral("CNormalEntrust"));
        CNormalEntrust->resize(445, 384);
        labelProductNumber = new QLabel(CNormalEntrust);
        labelProductNumber->setObjectName(QStringLiteral("labelProductNumber"));
        labelProductNumber->setGeometry(QRect(7, 10, 51, 20));
        cboProductNumber = new QComboBox(CNormalEntrust);
        cboProductNumber->setObjectName(QStringLiteral("cboProductNumber"));
        cboProductNumber->setGeometry(QRect(61, 10, 161, 20));
        labelLockPN = new CLabelClick(CNormalEntrust);
        labelLockPN->setObjectName(QStringLiteral("labelLockPN"));
        labelLockPN->setGeometry(QRect(225, 10, 20, 20));
        labelUnitNum = new QLabel(CNormalEntrust);
        labelUnitNum->setObjectName(QStringLiteral("labelUnitNum"));
        labelUnitNum->setGeometry(QRect(7, 43, 51, 20));
        cboUnitNum = new QComboBox(CNormalEntrust);
        cboUnitNum->setObjectName(QStringLiteral("cboUnitNum"));
        cboUnitNum->setGeometry(QRect(60, 40, 161, 20));
        labelLockUnitNum = new CLabelClick(CNormalEntrust);
        labelLockUnitNum->setObjectName(QStringLiteral("labelLockUnitNum"));
        labelLockUnitNum->setGeometry(QRect(225, 40, 20, 20));
        labelCode = new QLabel(CNormalEntrust);
        labelCode->setObjectName(QStringLiteral("labelCode"));
        labelCode->setGeometry(QRect(6, 70, 51, 20));
        lineEditCode = new QLineEdit(CNormalEntrust);
        lineEditCode->setObjectName(QStringLiteral("lineEditCode"));
        lineEditCode->setGeometry(QRect(62, 70, 71, 20));
        labelLockCode = new CLabelClick(CNormalEntrust);
        labelLockCode->setObjectName(QStringLiteral("labelLockCode"));
        labelLockCode->setGeometry(QRect(225, 70, 20, 20));
        labelBS = new QLabel(CNormalEntrust);
        labelBS->setObjectName(QStringLiteral("labelBS"));
        labelBS->setGeometry(QRect(5, 100, 51, 20));
        cboBS = new QComboBox(CNormalEntrust);
        cboBS->setObjectName(QStringLiteral("cboBS"));
        cboBS->setGeometry(QRect(60, 100, 161, 20));
        labelLockBS = new CLabelClick(CNormalEntrust);
        labelLockBS->setObjectName(QStringLiteral("labelLockBS"));
        labelLockBS->setGeometry(QRect(225, 99, 20, 20));
        cboPriceType = new QComboBox(CNormalEntrust);
        cboPriceType->setObjectName(QStringLiteral("cboPriceType"));
        cboPriceType->setGeometry(QRect(60, 126, 161, 20));
        labelLockPriceType = new CLabelClick(CNormalEntrust);
        labelLockPriceType->setObjectName(QStringLiteral("labelLockPriceType"));
        labelLockPriceType->setGeometry(QRect(225, 127, 20, 20));
        labelPriceType = new QLabel(CNormalEntrust);
        labelPriceType->setObjectName(QStringLiteral("labelPriceType"));
        labelPriceType->setGeometry(QRect(5, 126, 51, 20));
        labelEntrustPrice = new QLabel(CNormalEntrust);
        labelEntrustPrice->setObjectName(QStringLiteral("labelEntrustPrice"));
        labelEntrustPrice->setGeometry(QRect(6, 160, 60, 20));
        dsbEntrustPrice = new QDoubleSpinBox(CNormalEntrust);
        dsbEntrustPrice->setObjectName(QStringLiteral("dsbEntrustPrice"));
        dsbEntrustPrice->setGeometry(QRect(60, 161, 161, 20));
        labelPriceUnit = new QLabel(CNormalEntrust);
        labelPriceUnit->setObjectName(QStringLiteral("labelPriceUnit"));
        labelPriceUnit->setGeometry(QRect(225, 160, 20, 20));
        labelEntrustPrice_2 = new QLabel(CNormalEntrust);
        labelEntrustPrice_2->setObjectName(QStringLiteral("labelEntrustPrice_2"));
        labelEntrustPrice_2->setGeometry(QRect(8, 190, 51, 20));
        lineEditName = new QLineEdit(CNormalEntrust);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(138, 70, 81, 20));
        labelSellQty = new QLabel(CNormalEntrust);
        labelSellQty->setObjectName(QStringLiteral("labelSellQty"));
        labelSellQty->setGeometry(QRect(65, 193, 121, 16));
        labelSellQtyUnide = new QLabel(CNormalEntrust);
        labelSellQtyUnide->setObjectName(QStringLiteral("labelSellQtyUnide"));
        labelSellQtyUnide->setGeometry(QRect(196, 191, 16, 16));
        btnSellQtyPercentage = new QPushButton(CNormalEntrust);
        btnSellQtyPercentage->setObjectName(QStringLiteral("btnSellQtyPercentage"));
        btnSellQtyPercentage->setGeometry(QRect(216, 188, 40, 25));
        labelPriceUnit_2 = new QLabel(CNormalEntrust);
        labelPriceUnit_2->setObjectName(QStringLiteral("labelPriceUnit_2"));
        labelPriceUnit_2->setGeometry(QRect(228, 222, 16, 16));
        sbEntrustQty = new QSpinBox(CNormalEntrust);
        sbEntrustQty->setObjectName(QStringLiteral("sbEntrustQty"));
        sbEntrustQty->setGeometry(QRect(65, 221, 161, 20));
        labelEntrustAmountUnit = new QLabel(CNormalEntrust);
        labelEntrustAmountUnit->setObjectName(QStringLiteral("labelEntrustAmountUnit"));
        labelEntrustAmountUnit->setGeometry(QRect(230, 247, 20, 20));
        labelEntrustQty_2 = new QLabel(CNormalEntrust);
        labelEntrustQty_2->setObjectName(QStringLiteral("labelEntrustQty_2"));
        labelEntrustQty_2->setGeometry(QRect(8, 247, 51, 20));
        labelEntrustAmount = new QLabel(CNormalEntrust);
        labelEntrustAmount->setObjectName(QStringLiteral("labelEntrustAmount"));
        labelEntrustAmount->setGeometry(QRect(71, 247, 151, 20));
        labelEntrustAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelOption = new QLabel(CNormalEntrust);
        labelOption->setObjectName(QStringLiteral("labelOption"));
        labelOption->setGeometry(QRect(12, 283, 24, 16));
        btnEntrust = new QPushButton(CNormalEntrust);
        btnEntrust->setObjectName(QStringLiteral("btnEntrust"));
        btnEntrust->setGeometry(QRect(42, 280, 75, 23));
        cboType = new QComboBox(CNormalEntrust);
        cboType->setObjectName(QStringLiteral("cboType"));
        cboType->setGeometry(QRect(123, 281, 81, 20));
        btnReset = new QPushButton(CNormalEntrust);
        btnReset->setObjectName(QStringLiteral("btnReset"));
        btnReset->setGeometry(QRect(216, 280, 40, 25));
        labelEntrustQty = new QLabel(CNormalEntrust);
        labelEntrustQty->setObjectName(QStringLiteral("labelEntrustQty"));
        labelEntrustQty->setGeometry(QRect(8, 221, 51, 20));

        retranslateUi(CNormalEntrust);

        QMetaObject::connectSlotsByName(CNormalEntrust);
    } // setupUi

    void retranslateUi(QWidget *CNormalEntrust)
    {
        CNormalEntrust->setWindowTitle(QApplication::translate("CNormalEntrust", "Form", Q_NULLPTR));
        labelProductNumber->setText(QApplication::translate("CNormalEntrust", "\344\272\247\345\223\201\347\274\226\345\217\267:", Q_NULLPTR));
        labelLockPN->setText(QApplication::translate("CNormalEntrust", "TextLabel", Q_NULLPTR));
        labelUnitNum->setText(QApplication::translate("CNormalEntrust", "\345\215\225\345\205\203\347\274\226\345\217\267:", Q_NULLPTR));
        labelLockUnitNum->setText(QApplication::translate("CNormalEntrust", "TextLabel", Q_NULLPTR));
        labelCode->setText(QApplication::translate("CNormalEntrust", "\350\257\201\345\210\270\344\273\243\347\240\201:", Q_NULLPTR));
        lineEditCode->setText(QApplication::translate("CNormalEntrust", "000001", Q_NULLPTR));
        labelLockCode->setText(QApplication::translate("CNormalEntrust", "TextLabel", Q_NULLPTR));
        labelBS->setText(QApplication::translate("CNormalEntrust", "\345\247\224\346\211\230\346\226\271\345\220\221:", Q_NULLPTR));
        labelLockBS->setText(QApplication::translate("CNormalEntrust", "TextLabel", Q_NULLPTR));
        labelLockPriceType->setText(QApplication::translate("CNormalEntrust", "TextLabel", Q_NULLPTR));
        labelPriceType->setText(QApplication::translate("CNormalEntrust", "\344\273\267\346\240\274\347\261\273\345\236\213:", Q_NULLPTR));
        labelEntrustPrice->setText(QApplication::translate("CNormalEntrust", "\345\247\224\346\211\230\344\273\267\346\240\274:", Q_NULLPTR));
        labelPriceUnit->setText(QApplication::translate("CNormalEntrust", "\345\205\203", Q_NULLPTR));
        labelEntrustPrice_2->setText(QApplication::translate("CNormalEntrust", "\345\217\257\345\215\226\346\225\260\351\207\217:", Q_NULLPTR));
        lineEditName->setText(QApplication::translate("CNormalEntrust", "\345\271\263\345\256\211\351\223\266\350\241\214", Q_NULLPTR));
        labelSellQty->setText(QApplication::translate("CNormalEntrust", "12325", Q_NULLPTR));
        labelSellQtyUnide->setText(QApplication::translate("CNormalEntrust", "\350\202\241", Q_NULLPTR));
        btnSellQtyPercentage->setText(QApplication::translate("CNormalEntrust", "\345\205\250\351\203\250", Q_NULLPTR));
        labelPriceUnit_2->setText(QApplication::translate("CNormalEntrust", "\350\202\241", Q_NULLPTR));
        labelEntrustAmountUnit->setText(QApplication::translate("CNormalEntrust", "\345\205\203", Q_NULLPTR));
        labelEntrustQty_2->setText(QApplication::translate("CNormalEntrust", "\345\247\224\346\211\230\351\207\221\351\242\235:", Q_NULLPTR));
        labelEntrustAmount->setText(QApplication::translate("CNormalEntrust", "456879.25", Q_NULLPTR));
        labelOption->setText(QApplication::translate("CNormalEntrust", "\351\200\211\351\241\271", Q_NULLPTR));
        btnEntrust->setText(QApplication::translate("CNormalEntrust", "\344\270\213\345\215\225", Q_NULLPTR));
        btnReset->setText(QApplication::translate("CNormalEntrust", "\351\207\215\347\275\256", Q_NULLPTR));
        labelEntrustQty->setText(QApplication::translate("CNormalEntrust", "\345\247\224\346\211\230\346\225\260\351\207\217:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CNormalEntrust: public Ui_CNormalEntrust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMALENTRUST_H
