/********************************************************************************
** Form generated from reading UI file 'conditionEntrust.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDITIONENTRUST_H
#define UI_CONDITIONENTRUST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "labelClick.h"

QT_BEGIN_NAMESPACE

class Ui_CConditionEntrust
{
public:
    QLineEdit *lineEditName;
    QLabel *labelProductNumber;
    CLabelClick *labelLockUnitNum;
    QLabel *labelEntrustPrice_2;
    QDoubleSpinBox *dsbEntrustPrice;
    QLabel *labelEntrustPrice;
    QComboBox *cboBS;
    QLabel *labelCode;
    QLabel *labelSellQty;
    QLabel *labelOption;
    QLabel *labelPriceType;
    QComboBox *cboType;
    CLabelClick *labelLockCode;
    QComboBox *cboProductNumber;
    QComboBox *cboUnitNum;
    QComboBox *cboPriceType;
    QSpinBox *sbEntrustQty;
    CLabelClick *labelLockPN;
    QLabel *labelEntrustAmount;
    QLabel *labelPriceUnit;
    QLabel *labelPriceUnit_2;
    QLabel *labelUnitNum;
    QPushButton *btnEntrust;
    QPushButton *btnReset;
    QPushButton *btnSellQtyPercentage;
    QLabel *labelEntrustQty;
    QLabel *labelEntrustQty_2;
    CLabelClick *labelLockPriceType;
    QLineEdit *lineEditCode;
    CLabelClick *labelLockBS;
    QLabel *labelSellQtyUnide;
    QLabel *labelBS;
    QLabel *labelEntrustAmountUnit;
    QLabel *labelEntrusCondition;
    QComboBox *cboConditionPrice;
    QComboBox *cboCondition;
    QLineEdit *lineEditTriggerPrice;
    QLabel *labelEntrustAmountUnit_2;
    QLabel *labelEntrustQty_3;
    QDateEdit *deEffectiveDate;
    QCheckBox *checkBox;

    void setupUi(QWidget *CConditionEntrust)
    {
        if (CConditionEntrust->objectName().isEmpty())
            CConditionEntrust->setObjectName(QStringLiteral("CConditionEntrust"));
        CConditionEntrust->resize(331, 359);
        lineEditName = new QLineEdit(CConditionEntrust);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(138, 63, 81, 20));
        labelProductNumber = new QLabel(CConditionEntrust);
        labelProductNumber->setObjectName(QStringLiteral("labelProductNumber"));
        labelProductNumber->setGeometry(QRect(7, 5, 52, 20));
        labelLockUnitNum = new CLabelClick(CConditionEntrust);
        labelLockUnitNum->setObjectName(QStringLiteral("labelLockUnitNum"));
        labelLockUnitNum->setGeometry(QRect(225, 33, 20, 20));
        labelEntrustPrice_2 = new QLabel(CConditionEntrust);
        labelEntrustPrice_2->setObjectName(QStringLiteral("labelEntrustPrice_2"));
        labelEntrustPrice_2->setGeometry(QRect(7, 180, 52, 16));
        dsbEntrustPrice = new QDoubleSpinBox(CConditionEntrust);
        dsbEntrustPrice->setObjectName(QStringLiteral("dsbEntrustPrice"));
        dsbEntrustPrice->setGeometry(QRect(60, 149, 161, 20));
        labelEntrustPrice = new QLabel(CConditionEntrust);
        labelEntrustPrice->setObjectName(QStringLiteral("labelEntrustPrice"));
        labelEntrustPrice->setGeometry(QRect(7, 149, 52, 20));
        cboBS = new QComboBox(CConditionEntrust);
        cboBS->setObjectName(QStringLiteral("cboBS"));
        cboBS->setGeometry(QRect(60, 93, 161, 20));
        labelCode = new QLabel(CConditionEntrust);
        labelCode->setObjectName(QStringLiteral("labelCode"));
        labelCode->setGeometry(QRect(7, 63, 52, 20));
        labelSellQty = new QLabel(CConditionEntrust);
        labelSellQty->setObjectName(QStringLiteral("labelSellQty"));
        labelSellQty->setGeometry(QRect(65, 180, 121, 16));
        labelOption = new QLabel(CConditionEntrust);
        labelOption->setObjectName(QStringLiteral("labelOption"));
        labelOption->setGeometry(QRect(7, 327, 24, 16));
        labelPriceType = new QLabel(CConditionEntrust);
        labelPriceType->setObjectName(QStringLiteral("labelPriceType"));
        labelPriceType->setGeometry(QRect(7, 119, 52, 20));
        cboType = new QComboBox(CConditionEntrust);
        cboType->setObjectName(QStringLiteral("cboType"));
        cboType->setGeometry(QRect(123, 325, 69, 20));
        labelLockCode = new CLabelClick(CConditionEntrust);
        labelLockCode->setObjectName(QStringLiteral("labelLockCode"));
        labelLockCode->setGeometry(QRect(225, 62, 20, 20));
        cboProductNumber = new QComboBox(CConditionEntrust);
        cboProductNumber->setObjectName(QStringLiteral("cboProductNumber"));
        cboProductNumber->setGeometry(QRect(61, 3, 161, 20));
        cboUnitNum = new QComboBox(CConditionEntrust);
        cboUnitNum->setObjectName(QStringLiteral("cboUnitNum"));
        cboUnitNum->setGeometry(QRect(60, 33, 161, 20));
        cboPriceType = new QComboBox(CConditionEntrust);
        cboPriceType->setObjectName(QStringLiteral("cboPriceType"));
        cboPriceType->setGeometry(QRect(60, 119, 161, 20));
        sbEntrustQty = new QSpinBox(CConditionEntrust);
        sbEntrustQty->setObjectName(QStringLiteral("sbEntrustQty"));
        sbEntrustQty->setGeometry(QRect(65, 214, 161, 20));
        labelLockPN = new CLabelClick(CConditionEntrust);
        labelLockPN->setObjectName(QStringLiteral("labelLockPN"));
        labelLockPN->setGeometry(QRect(225, 3, 20, 20));
        labelEntrustAmount = new QLabel(CConditionEntrust);
        labelEntrustAmount->setObjectName(QStringLiteral("labelEntrustAmount"));
        labelEntrustAmount->setGeometry(QRect(71, 240, 151, 20));
        labelEntrustAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelPriceUnit = new QLabel(CConditionEntrust);
        labelPriceUnit->setObjectName(QStringLiteral("labelPriceUnit"));
        labelPriceUnit->setGeometry(QRect(225, 149, 20, 20));
        labelPriceUnit_2 = new QLabel(CConditionEntrust);
        labelPriceUnit_2->setObjectName(QStringLiteral("labelPriceUnit_2"));
        labelPriceUnit_2->setGeometry(QRect(230, 213, 20, 20));
        labelUnitNum = new QLabel(CConditionEntrust);
        labelUnitNum->setObjectName(QStringLiteral("labelUnitNum"));
        labelUnitNum->setGeometry(QRect(7, 36, 52, 20));
        btnEntrust = new QPushButton(CConditionEntrust);
        btnEntrust->setObjectName(QStringLiteral("btnEntrust"));
        btnEntrust->setGeometry(QRect(42, 324, 75, 23));
        btnReset = new QPushButton(CConditionEntrust);
        btnReset->setObjectName(QStringLiteral("btnReset"));
        btnReset->setGeometry(QRect(198, 324, 40, 25));
        btnSellQtyPercentage = new QPushButton(CConditionEntrust);
        btnSellQtyPercentage->setObjectName(QStringLiteral("btnSellQtyPercentage"));
        btnSellQtyPercentage->setGeometry(QRect(210, 173, 40, 25));
        labelEntrustQty = new QLabel(CConditionEntrust);
        labelEntrustQty->setObjectName(QStringLiteral("labelEntrustQty"));
        labelEntrustQty->setGeometry(QRect(7, 214, 52, 16));
        labelEntrustQty_2 = new QLabel(CConditionEntrust);
        labelEntrustQty_2->setObjectName(QStringLiteral("labelEntrustQty_2"));
        labelEntrustQty_2->setGeometry(QRect(7, 240, 52, 16));
        labelLockPriceType = new CLabelClick(CConditionEntrust);
        labelLockPriceType->setObjectName(QStringLiteral("labelLockPriceType"));
        labelLockPriceType->setGeometry(QRect(225, 120, 20, 20));
        lineEditCode = new QLineEdit(CConditionEntrust);
        lineEditCode->setObjectName(QStringLiteral("lineEditCode"));
        lineEditCode->setGeometry(QRect(62, 63, 71, 20));
        labelLockBS = new CLabelClick(CConditionEntrust);
        labelLockBS->setObjectName(QStringLiteral("labelLockBS"));
        labelLockBS->setGeometry(QRect(225, 93, 20, 20));
        labelSellQtyUnide = new QLabel(CConditionEntrust);
        labelSellQtyUnide->setObjectName(QStringLiteral("labelSellQtyUnide"));
        labelSellQtyUnide->setGeometry(QRect(190, 178, 16, 16));
        labelBS = new QLabel(CConditionEntrust);
        labelBS->setObjectName(QStringLiteral("labelBS"));
        labelBS->setGeometry(QRect(7, 93, 52, 20));
        labelEntrustAmountUnit = new QLabel(CConditionEntrust);
        labelEntrustAmountUnit->setObjectName(QStringLiteral("labelEntrustAmountUnit"));
        labelEntrustAmountUnit->setGeometry(QRect(230, 240, 20, 20));
        labelEntrusCondition = new QLabel(CConditionEntrust);
        labelEntrusCondition->setObjectName(QStringLiteral("labelEntrusCondition"));
        labelEntrusCondition->setGeometry(QRect(7, 268, 16, 16));
        cboConditionPrice = new QComboBox(CConditionEntrust);
        cboConditionPrice->setObjectName(QStringLiteral("cboConditionPrice"));
        cboConditionPrice->setGeometry(QRect(30, 266, 71, 20));
        cboCondition = new QComboBox(CConditionEntrust);
        cboCondition->setObjectName(QStringLiteral("cboCondition"));
        cboCondition->setGeometry(QRect(110, 266, 71, 20));
        lineEditTriggerPrice = new QLineEdit(CConditionEntrust);
        lineEditTriggerPrice->setObjectName(QStringLiteral("lineEditTriggerPrice"));
        lineEditTriggerPrice->setGeometry(QRect(188, 266, 71, 20));
        labelEntrustAmountUnit_2 = new QLabel(CConditionEntrust);
        labelEntrustAmountUnit_2->setObjectName(QStringLiteral("labelEntrustAmountUnit_2"));
        labelEntrustAmountUnit_2->setGeometry(QRect(264, 267, 20, 20));
        labelEntrustQty_3 = new QLabel(CConditionEntrust);
        labelEntrustQty_3->setObjectName(QStringLiteral("labelEntrustQty_3"));
        labelEntrustQty_3->setGeometry(QRect(7, 295, 52, 16));
        deEffectiveDate = new QDateEdit(CConditionEntrust);
        deEffectiveDate->setObjectName(QStringLiteral("deEffectiveDate"));
        deEffectiveDate->setGeometry(QRect(64, 293, 110, 22));
        checkBox = new QCheckBox(CConditionEntrust);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(180, 296, 71, 16));

        retranslateUi(CConditionEntrust);

        QMetaObject::connectSlotsByName(CConditionEntrust);
    } // setupUi

    void retranslateUi(QWidget *CConditionEntrust)
    {
        lineEditName->setText(QApplication::translate("CConditionEntrust", "\345\271\263\345\256\211\351\223\266\350\241\214", Q_NULLPTR));
        labelProductNumber->setText(QApplication::translate("CConditionEntrust", "\344\272\247\345\223\201\347\274\226\345\217\267:", Q_NULLPTR));
        labelLockUnitNum->setText(QApplication::translate("CConditionEntrust", "TextLabel", Q_NULLPTR));
        labelEntrustPrice_2->setText(QApplication::translate("CConditionEntrust", "\345\217\257\345\215\226\346\225\260\351\207\217:", Q_NULLPTR));
        labelEntrustPrice->setText(QApplication::translate("CConditionEntrust", "\345\247\224\346\211\230\344\273\267\346\240\274:", Q_NULLPTR));
        labelCode->setText(QApplication::translate("CConditionEntrust", "\350\257\201\345\210\270\344\273\243\347\240\201:", Q_NULLPTR));
        labelSellQty->setText(QApplication::translate("CConditionEntrust", "456986", Q_NULLPTR));
        labelOption->setText(QApplication::translate("CConditionEntrust", "\351\200\211\351\241\271", Q_NULLPTR));
        labelPriceType->setText(QApplication::translate("CConditionEntrust", "\344\273\267\346\240\274\347\261\273\345\236\213:", Q_NULLPTR));
        labelLockCode->setText(QApplication::translate("CConditionEntrust", "TextLabel", Q_NULLPTR));
        labelLockPN->setText(QApplication::translate("CConditionEntrust", "TextLabel", Q_NULLPTR));
        labelEntrustAmount->setText(QApplication::translate("CConditionEntrust", "123147", Q_NULLPTR));
        labelPriceUnit->setText(QApplication::translate("CConditionEntrust", "\345\205\203", Q_NULLPTR));
        labelPriceUnit_2->setText(QApplication::translate("CConditionEntrust", "\350\202\241", Q_NULLPTR));
        labelUnitNum->setText(QApplication::translate("CConditionEntrust", "\345\215\225\345\205\203\347\274\226\345\217\267:", Q_NULLPTR));
        btnEntrust->setText(QApplication::translate("CConditionEntrust", "\344\270\213\345\215\225", Q_NULLPTR));
        btnReset->setText(QApplication::translate("CConditionEntrust", "\351\207\215\347\275\256", Q_NULLPTR));
        btnSellQtyPercentage->setText(QApplication::translate("CConditionEntrust", "\345\205\250\351\203\250", Q_NULLPTR));
        labelEntrustQty->setText(QApplication::translate("CConditionEntrust", "\345\247\224\346\211\230\346\225\260\351\207\217:", Q_NULLPTR));
        labelEntrustQty_2->setText(QApplication::translate("CConditionEntrust", "\345\247\224\346\211\230\351\207\221\351\242\235:", Q_NULLPTR));
        labelLockPriceType->setText(QApplication::translate("CConditionEntrust", "TextLabel", Q_NULLPTR));
        lineEditCode->setText(QApplication::translate("CConditionEntrust", "000001", Q_NULLPTR));
        labelLockBS->setText(QApplication::translate("CConditionEntrust", "TextLabel", Q_NULLPTR));
        labelSellQtyUnide->setText(QApplication::translate("CConditionEntrust", "\350\202\241", Q_NULLPTR));
        labelBS->setText(QApplication::translate("CConditionEntrust", "\345\247\224\346\211\230\346\226\271\345\220\221:", Q_NULLPTR));
        labelEntrustAmountUnit->setText(QApplication::translate("CConditionEntrust", "\345\205\203", Q_NULLPTR));
        labelEntrusCondition->setText(QApplication::translate("CConditionEntrust", "\345\275\223", Q_NULLPTR));
        lineEditTriggerPrice->setText(QApplication::translate("CConditionEntrust", "20.14", Q_NULLPTR));
        labelEntrustAmountUnit_2->setText(QApplication::translate("CConditionEntrust", "\345\205\203", Q_NULLPTR));
        labelEntrustQty_3->setText(QApplication::translate("CConditionEntrust", "\346\234\211\346\225\210\346\234\237\350\207\263:", Q_NULLPTR));
        checkBox->setText(QApplication::translate("CConditionEntrust", "\351\225\277\346\234\237\346\234\211\346\225\210", Q_NULLPTR));
        Q_UNUSED(CConditionEntrust);
    } // retranslateUi

};

namespace Ui {
    class CConditionEntrust: public Ui_CConditionEntrust {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDITIONENTRUST_H
