/********************************************************************************
** Form generated from reading UI file 'quote.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUOTE_H
#define UI_QUOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CQuote
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelLastPrice;
    QLabel *labelSellQty2;
    QLabel *labelSellPrice4;
    QLabel *labelSellPrice1;
    QLabel *labelSellPrice5;
    QLabel *labelSellName1;
    QLabel *labelSellQty1;
    QLabel *labelSellName4;
    QLabel *labelSellPrice2;
    QLabel *labelSellQty4;
    QLabel *labelSellName2;
    QLabel *labelSellName5;
    QLabel *labelSellQty5;
    QLabel *labelSellName3;
    QLabel *labelSellQty3;
    QLabel *labelSellPrice3;
    QLabel *labelZTName_2;
    QLabel *labelZTPrice;
    QLabel *labelZTName_4;
    QLabel *labelZTName;
    QLabel *labelDTPrice_4;
    QLabel *labelDTPrice_2;
    QLabel *labelZTName_3;
    QLabel *labelDTName;
    QLabel *labelDTPrice_3;
    QLabel *labelDTPrice;
    QLabel *labelBuyName4;
    QLabel *labelBuyPrice4;
    QLabel *labelBuyPrice2;
    QLabel *labelBuyQty3;
    QLabel *labelBuyQty2;
    QLabel *labelBuyPrice5;
    QLabel *labelBuyName1;
    QLabel *labelBuyName2;
    QLabel *labelBuyName3;
    QLabel *labelBuyPrice1;
    QLabel *labelBuyName5;
    QLabel *labelBuyPrice3;
    QLabel *labelBuyQty5;
    QLabel *labelBuyQty1;
    QLabel *labelBuyQty4;
    QLabel *labelValue;
    QLabel *labelPercentage;
    QLabel *labelName;
    QLabel *labelCode;

    void setupUi(QWidget *CQuote)
    {
        if (CQuote->objectName().isEmpty())
            CQuote->setObjectName(QStringLiteral("CQuote"));
        CQuote->resize(209, 378);
        CQuote->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(CQuote);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 267, 191, 16));
        label_3 = new QLabel(CQuote);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 160, 191, 16));
        label_4 = new QLabel(CQuote);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 60, 191, 16));
        labelLastPrice = new QLabel(CQuote);
        labelLastPrice->setObjectName(QStringLiteral("labelLastPrice"));
        labelLastPrice->setGeometry(QRect(17, 30, 81, 31));
        labelLastPrice->setStyleSheet(QStringLiteral(""));
        labelLastPrice->setAlignment(Qt::AlignCenter);
        labelSellQty2 = new QLabel(CQuote);
        labelSellQty2->setObjectName(QStringLiteral("labelSellQty2"));
        labelSellQty2->setGeometry(QRect(139, 128, 61, 20));
        labelSellQty2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellPrice4 = new QLabel(CQuote);
        labelSellPrice4->setObjectName(QStringLiteral("labelSellPrice4"));
        labelSellPrice4->setGeometry(QRect(53, 92, 71, 20));
        labelSellPrice4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellPrice1 = new QLabel(CQuote);
        labelSellPrice1->setObjectName(QStringLiteral("labelSellPrice1"));
        labelSellPrice1->setGeometry(QRect(53, 146, 71, 20));
        labelSellPrice1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellPrice5 = new QLabel(CQuote);
        labelSellPrice5->setObjectName(QStringLiteral("labelSellPrice5"));
        labelSellPrice5->setGeometry(QRect(53, 74, 71, 20));
        labelSellPrice5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellName1 = new QLabel(CQuote);
        labelSellName1->setObjectName(QStringLiteral("labelSellName1"));
        labelSellName1->setGeometry(QRect(12, 146, 24, 16));
        labelSellQty1 = new QLabel(CQuote);
        labelSellQty1->setObjectName(QStringLiteral("labelSellQty1"));
        labelSellQty1->setGeometry(QRect(139, 146, 61, 20));
        labelSellQty1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellName4 = new QLabel(CQuote);
        labelSellName4->setObjectName(QStringLiteral("labelSellName4"));
        labelSellName4->setGeometry(QRect(12, 92, 24, 16));
        labelSellPrice2 = new QLabel(CQuote);
        labelSellPrice2->setObjectName(QStringLiteral("labelSellPrice2"));
        labelSellPrice2->setGeometry(QRect(53, 128, 71, 20));
        labelSellPrice2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellQty4 = new QLabel(CQuote);
        labelSellQty4->setObjectName(QStringLiteral("labelSellQty4"));
        labelSellQty4->setGeometry(QRect(139, 92, 61, 20));
        labelSellQty4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellName2 = new QLabel(CQuote);
        labelSellName2->setObjectName(QStringLiteral("labelSellName2"));
        labelSellName2->setGeometry(QRect(12, 128, 24, 16));
        labelSellName5 = new QLabel(CQuote);
        labelSellName5->setObjectName(QStringLiteral("labelSellName5"));
        labelSellName5->setGeometry(QRect(12, 74, 24, 16));
        labelSellQty5 = new QLabel(CQuote);
        labelSellQty5->setObjectName(QStringLiteral("labelSellQty5"));
        labelSellQty5->setGeometry(QRect(139, 74, 61, 20));
        labelSellQty5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellName3 = new QLabel(CQuote);
        labelSellName3->setObjectName(QStringLiteral("labelSellName3"));
        labelSellName3->setGeometry(QRect(12, 110, 24, 16));
        labelSellQty3 = new QLabel(CQuote);
        labelSellQty3->setObjectName(QStringLiteral("labelSellQty3"));
        labelSellQty3->setGeometry(QRect(139, 110, 61, 20));
        labelSellQty3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSellPrice3 = new QLabel(CQuote);
        labelSellPrice3->setObjectName(QStringLiteral("labelSellPrice3"));
        labelSellPrice3->setGeometry(QRect(53, 110, 71, 20));
        labelSellPrice3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelZTName_2 = new QLabel(CQuote);
        labelZTName_2->setObjectName(QStringLiteral("labelZTName_2"));
        labelZTName_2->setGeometry(QRect(12, 299, 51, 16));
        labelZTPrice = new QLabel(CQuote);
        labelZTPrice->setObjectName(QStringLiteral("labelZTPrice"));
        labelZTPrice->setGeometry(QRect(70, 280, 30, 16));
        labelZTName_4 = new QLabel(CQuote);
        labelZTName_4->setObjectName(QStringLiteral("labelZTName_4"));
        labelZTName_4->setGeometry(QRect(12, 345, 51, 21));
        labelZTName = new QLabel(CQuote);
        labelZTName->setObjectName(QStringLiteral("labelZTName"));
        labelZTName->setGeometry(QRect(12, 280, 24, 16));
        labelDTPrice_4 = new QLabel(CQuote);
        labelDTPrice_4->setObjectName(QStringLiteral("labelDTPrice_4"));
        labelDTPrice_4->setGeometry(QRect(100, 347, 100, 20));
        labelDTPrice_4->setStyleSheet(QStringLiteral(""));
        labelDTPrice_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelDTPrice_2 = new QLabel(CQuote);
        labelDTPrice_2->setObjectName(QStringLiteral("labelDTPrice_2"));
        labelDTPrice_2->setGeometry(QRect(100, 298, 100, 20));
        labelDTPrice_2->setStyleSheet(QStringLiteral(""));
        labelDTPrice_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelZTName_3 = new QLabel(CQuote);
        labelZTName_3->setObjectName(QStringLiteral("labelZTName_3"));
        labelZTName_3->setGeometry(QRect(12, 325, 51, 16));
        labelDTName = new QLabel(CQuote);
        labelDTName->setObjectName(QStringLiteral("labelDTName"));
        labelDTName->setGeometry(QRect(120, 280, 24, 16));
        labelDTPrice_3 = new QLabel(CQuote);
        labelDTPrice_3->setObjectName(QStringLiteral("labelDTPrice_3"));
        labelDTPrice_3->setGeometry(QRect(100, 322, 100, 20));
        labelDTPrice_3->setStyleSheet(QStringLiteral(""));
        labelDTPrice_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelDTPrice = new QLabel(CQuote);
        labelDTPrice->setObjectName(QStringLiteral("labelDTPrice"));
        labelDTPrice->setGeometry(QRect(170, 280, 30, 16));
        labelBuyName4 = new QLabel(CQuote);
        labelBuyName4->setObjectName(QStringLiteral("labelBuyName4"));
        labelBuyName4->setGeometry(QRect(12, 230, 24, 16));
        labelBuyPrice4 = new QLabel(CQuote);
        labelBuyPrice4->setObjectName(QStringLiteral("labelBuyPrice4"));
        labelBuyPrice4->setGeometry(QRect(53, 230, 71, 20));
        labelBuyPrice4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyPrice2 = new QLabel(CQuote);
        labelBuyPrice2->setObjectName(QStringLiteral("labelBuyPrice2"));
        labelBuyPrice2->setGeometry(QRect(53, 194, 71, 20));
        labelBuyPrice2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyQty3 = new QLabel(CQuote);
        labelBuyQty3->setObjectName(QStringLiteral("labelBuyQty3"));
        labelBuyQty3->setGeometry(QRect(139, 212, 61, 20));
        labelBuyQty3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyQty2 = new QLabel(CQuote);
        labelBuyQty2->setObjectName(QStringLiteral("labelBuyQty2"));
        labelBuyQty2->setGeometry(QRect(139, 194, 61, 20));
        labelBuyQty2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyPrice5 = new QLabel(CQuote);
        labelBuyPrice5->setObjectName(QStringLiteral("labelBuyPrice5"));
        labelBuyPrice5->setGeometry(QRect(53, 248, 71, 20));
        labelBuyPrice5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyName1 = new QLabel(CQuote);
        labelBuyName1->setObjectName(QStringLiteral("labelBuyName1"));
        labelBuyName1->setGeometry(QRect(12, 176, 24, 16));
        labelBuyName2 = new QLabel(CQuote);
        labelBuyName2->setObjectName(QStringLiteral("labelBuyName2"));
        labelBuyName2->setGeometry(QRect(12, 194, 24, 16));
        labelBuyName3 = new QLabel(CQuote);
        labelBuyName3->setObjectName(QStringLiteral("labelBuyName3"));
        labelBuyName3->setGeometry(QRect(12, 212, 24, 16));
        labelBuyPrice1 = new QLabel(CQuote);
        labelBuyPrice1->setObjectName(QStringLiteral("labelBuyPrice1"));
        labelBuyPrice1->setGeometry(QRect(53, 176, 71, 20));
        labelBuyPrice1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyName5 = new QLabel(CQuote);
        labelBuyName5->setObjectName(QStringLiteral("labelBuyName5"));
        labelBuyName5->setGeometry(QRect(12, 248, 24, 16));
        labelBuyPrice3 = new QLabel(CQuote);
        labelBuyPrice3->setObjectName(QStringLiteral("labelBuyPrice3"));
        labelBuyPrice3->setGeometry(QRect(53, 212, 71, 20));
        labelBuyPrice3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyQty5 = new QLabel(CQuote);
        labelBuyQty5->setObjectName(QStringLiteral("labelBuyQty5"));
        labelBuyQty5->setGeometry(QRect(139, 248, 61, 20));
        labelBuyQty5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyQty1 = new QLabel(CQuote);
        labelBuyQty1->setObjectName(QStringLiteral("labelBuyQty1"));
        labelBuyQty1->setGeometry(QRect(139, 176, 61, 20));
        labelBuyQty1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBuyQty4 = new QLabel(CQuote);
        labelBuyQty4->setObjectName(QStringLiteral("labelBuyQty4"));
        labelBuyQty4->setGeometry(QRect(139, 230, 61, 20));
        labelBuyQty4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelValue = new QLabel(CQuote);
        labelValue->setObjectName(QStringLiteral("labelValue"));
        labelValue->setGeometry(QRect(150, 28, 50, 20));
        labelValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelPercentage = new QLabel(CQuote);
        labelPercentage->setObjectName(QStringLiteral("labelPercentage"));
        labelPercentage->setGeometry(QRect(151, 47, 50, 20));
        labelPercentage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelName = new QLabel(CQuote);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setGeometry(QRect(119, 9, 81, 20));
        labelName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelCode = new QLabel(CQuote);
        labelCode->setObjectName(QStringLiteral("labelCode"));
        labelCode->setGeometry(QRect(20, 10, 70, 16));
        labelCode->setAlignment(Qt::AlignCenter);

        retranslateUi(CQuote);

        QMetaObject::connectSlotsByName(CQuote);
    } // setupUi

    void retranslateUi(QWidget *CQuote)
    {
        label_2->setText(QApplication::translate("CQuote", "--------------------------------", Q_NULLPTR));
        label_3->setText(QApplication::translate("CQuote", "--------------------------------", Q_NULLPTR));
        label_4->setText(QApplication::translate("CQuote", "--------------------------------", Q_NULLPTR));
        labelLastPrice->setText(QApplication::translate("CQuote", "13.457", Q_NULLPTR));
        labelSellQty2->setText(QApplication::translate("CQuote", "222", Q_NULLPTR));
        labelSellPrice4->setText(QApplication::translate("CQuote", "8.44", Q_NULLPTR));
        labelSellPrice1->setText(QApplication::translate("CQuote", "8.41", Q_NULLPTR));
        labelSellPrice5->setText(QApplication::translate("CQuote", "8.45", Q_NULLPTR));
        labelSellName1->setText(QApplication::translate("CQuote", "\345\215\226\344\270\200", Q_NULLPTR));
        labelSellQty1->setText(QApplication::translate("CQuote", "111", Q_NULLPTR));
        labelSellName4->setText(QApplication::translate("CQuote", "\345\215\226\345\233\233", Q_NULLPTR));
        labelSellPrice2->setText(QApplication::translate("CQuote", "8.42", Q_NULLPTR));
        labelSellQty4->setText(QApplication::translate("CQuote", "444", Q_NULLPTR));
        labelSellName2->setText(QApplication::translate("CQuote", "\345\215\226\344\272\214", Q_NULLPTR));
        labelSellName5->setText(QApplication::translate("CQuote", "\345\215\226\344\272\224", Q_NULLPTR));
        labelSellQty5->setText(QApplication::translate("CQuote", "555", Q_NULLPTR));
        labelSellName3->setText(QApplication::translate("CQuote", "\345\215\226\344\270\211", Q_NULLPTR));
        labelSellQty3->setText(QApplication::translate("CQuote", "333", Q_NULLPTR));
        labelSellPrice3->setText(QApplication::translate("CQuote", "8.43", Q_NULLPTR));
        labelZTName_2->setText(QApplication::translate("CQuote", "\345\217\257\347\224\250\351\207\221\351\242\235", Q_NULLPTR));
        labelZTPrice->setText(QApplication::translate("CQuote", "15.32", Q_NULLPTR));
        labelZTName_4->setText(QApplication::translate("CQuote", "\345\217\257\345\215\226\346\225\260\351\207\217", Q_NULLPTR));
        labelZTName->setText(QApplication::translate("CQuote", "\346\266\250\345\201\234", Q_NULLPTR));
        labelDTPrice_4->setText(QApplication::translate("CQuote", "1000", Q_NULLPTR));
        labelDTPrice_2->setText(QApplication::translate("CQuote", "999999999", Q_NULLPTR));
        labelZTName_3->setText(QApplication::translate("CQuote", "\345\275\223\345\211\215\346\225\260\351\207\217", Q_NULLPTR));
        labelDTName->setText(QApplication::translate("CQuote", "\346\266\250\345\201\234", Q_NULLPTR));
        labelDTPrice_3->setText(QApplication::translate("CQuote", "5000", Q_NULLPTR));
        labelDTPrice->setText(QApplication::translate("CQuote", "12.54", Q_NULLPTR));
        labelBuyName4->setText(QApplication::translate("CQuote", "\344\271\260\345\233\233", Q_NULLPTR));
        labelBuyPrice4->setText(QApplication::translate("CQuote", "7.44", Q_NULLPTR));
        labelBuyPrice2->setText(QApplication::translate("CQuote", "7.42", Q_NULLPTR));
        labelBuyQty3->setText(QApplication::translate("CQuote", "333", Q_NULLPTR));
        labelBuyQty2->setText(QApplication::translate("CQuote", "222", Q_NULLPTR));
        labelBuyPrice5->setText(QApplication::translate("CQuote", "7.45", Q_NULLPTR));
        labelBuyName1->setText(QApplication::translate("CQuote", "\344\271\260\344\270\200", Q_NULLPTR));
        labelBuyName2->setText(QApplication::translate("CQuote", "\344\271\260\344\272\214", Q_NULLPTR));
        labelBuyName3->setText(QApplication::translate("CQuote", "\344\271\260\344\270\211", Q_NULLPTR));
        labelBuyPrice1->setText(QApplication::translate("CQuote", "7.41", Q_NULLPTR));
        labelBuyName5->setText(QApplication::translate("CQuote", "\344\271\260\344\272\224", Q_NULLPTR));
        labelBuyPrice3->setText(QApplication::translate("CQuote", "7.43", Q_NULLPTR));
        labelBuyQty5->setText(QApplication::translate("CQuote", "555", Q_NULLPTR));
        labelBuyQty1->setText(QApplication::translate("CQuote", "111", Q_NULLPTR));
        labelBuyQty4->setText(QApplication::translate("CQuote", "444", Q_NULLPTR));
        labelValue->setText(QApplication::translate("CQuote", "0.14", Q_NULLPTR));
        labelPercentage->setText(QApplication::translate("CQuote", "1.65%", Q_NULLPTR));
        labelName->setText(QApplication::translate("CQuote", "\345\271\263\345\256\211\351\223\266\350\241\214", Q_NULLPTR));
        labelCode->setText(QApplication::translate("CQuote", "000001", Q_NULLPTR));
        Q_UNUSED(CQuote);
    } // retranslateUi

};

namespace Ui {
    class CQuote: public Ui_CQuote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUOTE_H
