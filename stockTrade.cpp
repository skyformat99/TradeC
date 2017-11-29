#include "stockTrade.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include <QRadioButton>
#include <QStackedLayout>
#include <QStandardItemModel>
#include <QTableView>
#include <QPainter>
#include "quote.h"
#include "normalEntrust.h"
#include "conditionEntrust.h"

CStockTrade::CStockTrade(QWidget *parent)
    : QWidget(parent),
      m_pLeft(NULL),
      m_pCenter(NULL),
      m_pRight(NULL),
      m_pNormalEntrust(NULL),
      m_pConditionEntrust(NULL),
      m_widgetTZAdvice(), m_modelTZAdvice(NULL),
      m_tbTZAdvice(NULL),
      m_widgetGD(NULL),
      m_modelGD(NULL),
      m_tbGD(NULL),
      m_widgetMD(NULL),
      m_modelMD(NULL),
      m_tbMD(NULL),
      m_widgetEntrust(NULL),
      m_modelEntrust(NULL),
      m_tbEntrust(NULL),
      m_widgetTrade(NULL),
      m_modelTrade(NULL),
      m_tbTrade(NULL)
{
    layoutLeft();
    layoutCenter();
    layoutRight();

    layoutStockTrade();
}

void CStockTrade::layoutLeft()
{
    m_pLeft = new CQuote(this);
    //m_pLeft->setStyleSheet("background-color:rgb(255,255,0);");
    m_pLeft->setFixedSize(201, 350);
}

void CStockTrade::layoutCenter()
{
    m_pCenter = new QWidget(this);
    //m_pCenter->setStyleSheet("background-color:rgb(0,255,0);");
    m_pCenter->setFixedSize(295, 420);

    // 生成顶部界面
    QHBoxLayout *layoutTop = new QHBoxLayout;
    QRadioButton *btnNormalEntrust = new QRadioButton(u8"普通委托");
    QRadioButton *btnConditionalEntrust = new QRadioButton(u8"条件委托");
    layoutTop->addStretch();
    layoutTop->addWidget(btnNormalEntrust);
    layoutTop->addStretch();
    layoutTop->addWidget(btnConditionalEntrust);
    layoutTop->addStretch();
    layoutTop->setMargin(0);
    layoutTop->setSpacing(0);
    btnNormalEntrust->setChecked(true);

    // 生成底部界面
    m_pStackLayoutCenter = new QStackedLayout;
    CNormalEntrust *pNormalEntrust = new CNormalEntrust;
    CConditionEntrust *pConditionEntrust = new CConditionEntrust;
    m_pStackLayoutCenter->addWidget(pNormalEntrust);
    m_pStackLayoutCenter->addWidget(pConditionEntrust);

    // 布局顶部和底部界面
    QVBoxLayout *layoutCenter = new QVBoxLayout;
    layoutCenter->addLayout(layoutTop);
    layoutCenter->addLayout(m_pStackLayoutCenter);
    m_pCenter->setLayout(layoutCenter);

    // 关联事件
    connect(btnNormalEntrust, SIGNAL(toggled(bool)), this, SLOT(showNormalEntrust(bool)));
    connect(btnConditionalEntrust, SIGNAL(toggled(bool)), this, SLOT(showConditionEntrust(bool)));
}

void CStockTrade::layoutRight()
{
    m_pStackLayoutRight = new QStackedLayout;

    m_pRight = new QWidget(this);
    //m_pRight->setStyleSheet("background-color:rgb(0,255,255);");

    // 生成顶部按钮
    QPushButton *btnTZAdvice = new QPushButton(u8"投资建议");
    QPushButton *btnGD = new QPushButton(u8"挂单");
    QPushButton *btnMD = new QPushButton(u8"埋单");
    QPushButton *btnEntrust = new QPushButton(u8"委托");
    QPushButton *btnTrade = new QPushButton(u8"成交");

    QHBoxLayout *layoutTop = new QHBoxLayout;
    layoutTop->addWidget(btnTZAdvice);
    layoutTop->addWidget(btnGD);
    layoutTop->addWidget(btnMD);
    layoutTop->addWidget(btnEntrust);
    layoutTop->addWidget(btnTrade);
    layoutTop->addStretch();


    generateTZAdviceSurface();
    generateGDSurface();
    generateMDSurface();
    generateEntrustSurface();
    generateTradeSurface();

    if (m_widgetTZAdvice)
        m_pStackLayoutRight->addWidget(m_widgetTZAdvice);

    if (m_widgetGD)
        m_pStackLayoutRight->addWidget(m_widgetGD);

    if (m_widgetMD)
        m_pStackLayoutRight->addWidget(m_widgetMD);

    if (m_widgetEntrust)
        m_pStackLayoutRight->addWidget(m_widgetEntrust);

    if (m_widgetTrade)
        m_pStackLayoutRight->addWidget(m_widgetTrade);

    QVBoxLayout *layoutRight = new QVBoxLayout;
    layoutRight->addLayout(layoutTop);
    layoutRight->addLayout(m_pStackLayoutRight);

    m_pRight->setLayout(layoutRight);

    connect(btnTZAdvice, SIGNAL(clicked()), this, SLOT(showTZAdvice()));
    connect(btnGD, SIGNAL(clicked()), this, SLOT(showGD()));
    connect(btnMD, SIGNAL(clicked()), this, SLOT(showMD()));
    connect(btnEntrust, SIGNAL(clicked()), this, SLOT(showEntrust()));
    connect(btnTrade, SIGNAL(clicked()), this, SLOT(showTrade()));
}

void CStockTrade::layoutStockTrade()
{
    QHBoxLayout *layoutMain = new QHBoxLayout;

    if (m_pLeft)
    {
        layoutMain->addWidget(m_pLeft, 0, Qt::AlignTop|Qt::AlignLeft);
    }

    if (m_pCenter)
    {
        layoutMain->addWidget(m_pCenter, 0, Qt::AlignTop|Qt::AlignLeft);
    }

    if (m_pRight)
    {
        layoutMain->addWidget(m_pRight);
    }

    layoutMain->setMargin(0);
    layoutMain->setSpacing(15);

    setLayout(layoutMain);
}

void CStockTrade::generateTZAdviceSurface()
{
    m_widgetTZAdvice = new QWidget;
    m_tbTZAdvice = new QTableView;
    m_modelTZAdvice = new QStandardItemModel();

    // 生成表头
    QStringList strTitle = QString(u8"投资建议编号,时间,投资建议状态,证券代码,证券名称,交易市场,委托方向,价格类型,建议价格,建议数量,建议金额,产品名称,单元名称,日期,拒绝原因").simplified().split(",");;
    m_modelTZAdvice->setHorizontalHeaderLabels(strTitle);

    // 填充数据
    //    QStandardItem* item = 0;
    //    for(int i = 0;i < 10;i++){
    //        item = new QStandardItem(QString(u8"姓名%1").arg(i));
    //        model->setItem(i,0,item);
    //        item = new QStandardItem(QString(u8"地址%1").arg(i*2));
    //        model->setItem(i,1,item);
    //        item = new QStandardItem(QString(u8"手机号%1").arg(i*3));
    //        model->setItem(i,2,item);
    //    }

    m_tbTZAdvice->setModel(m_modelTZAdvice);
    m_tbTZAdvice->show();

    // 生成底部按钮
    QLabel *lbl = new QLabel;
    QPushButton *btnCancelEntrust = new QPushButton(u8"撤单");
    QCheckBox *cboxNoTrigger = new QCheckBox(u8"未触发");
    QCheckBox *cboxCancel = new QCheckBox(u8"未触发即撤销");
    QCheckBox *cboxRejectr = new QCheckBox(u8"已拒绝");

    QHBoxLayout *layoutBottom = new QHBoxLayout;
    layoutBottom->addWidget(lbl);
    layoutBottom->addWidget(btnCancelEntrust);
    layoutBottom->addWidget(cboxNoTrigger);
    layoutBottom->addWidget(cboxCancel);
    layoutBottom->addWidget(cboxRejectr);
    layoutBottom->addStretch();
    layoutBottom->setSpacing(20);

    QVBoxLayout *layoutTZAdvice = new QVBoxLayout;
    layoutTZAdvice->addWidget(m_tbTZAdvice);
    layoutTZAdvice->addLayout(layoutBottom);

    m_widgetTZAdvice->setLayout(layoutTZAdvice);
}

void CStockTrade::generateGDSurface()
{
    m_widgetGD = new QWidget;
    m_modelGD = new QStandardItemModel;
    m_tbGD = new QTableView;

    QStringList strTitle = QString(u8"委托序号,委托时间,证券代码,证券名称,委托方向,价格类型,委托价格,委托数量,挂单数量,委托金额,成交均价,成交数量,成交(%),委托批号,产品名称,单元名称,日期").simplified().split(",");;
    m_modelGD->setHorizontalHeaderLabels(strTitle);

    m_tbGD->setModel(m_modelGD);
    m_tbGD->show();

    // 生成底部按钮
    QLabel *lbl = new QLabel;
    QPushButton *btnCancel = new QPushButton(u8"撤单");
    QPushButton *btnAllCancel = new QPushButton(u8"全部撤单");
    QPushButton *btnConditionGD = new QPushButton(u8"条件撤单");
    QPushButton *btnBatchGD = new QPushButton(u8"批量改单");
    QPushButton *btnPlatePriceGD = new QPushButton(u8"盘口价改单");

    QHBoxLayout *layoutBottom = new QHBoxLayout;
    layoutBottom->addWidget(lbl);
    layoutBottom->addWidget(btnCancel);
    layoutBottom->addWidget(btnAllCancel);
    layoutBottom->addWidget(btnConditionGD);
    layoutBottom->addWidget(btnBatchGD);
    layoutBottom->addWidget(btnPlatePriceGD);
    layoutBottom->addStretch();
    layoutBottom->setSpacing(20);

    QVBoxLayout *layoutGD = new QVBoxLayout;
    layoutGD->addWidget(m_tbGD);
    layoutGD->addLayout(layoutBottom);

    m_widgetGD->setLayout(layoutGD);

}

void CStockTrade::generateMDSurface()
{
    m_widgetMD = new QWidget;
    m_modelMD = new QStandardItemModel;
    m_tbMD = new QTableView;

    QStringList strTitle = QString(u8"状态,编号,委托批号,证券代码,证券名称,委托方向,埋单类型,触发条件,委托价格,预埋数量,触发数量,成交数量,备注,产品批号,产品名称,单元编号,单元名称,开始日期,结束日期").simplified().split(",");;
    m_modelMD->setHorizontalHeaderLabels(strTitle);

    m_tbMD->setModel(m_modelMD);
    m_tbMD->show();

    QLabel *lbl = new QLabel;
    QPushButton *btnPause = new QPushButton(u8"暂停");
    QPushButton *btnxActive = new QPushButton(u8"激活");
    QPushButton *btnxRevoke = new QPushButton(u8"撤销");
    QCheckBox *cboNoReport = new QCheckBox(u8"未报");
    QCheckBox *cboRuning= new QCheckBox(u8"运行中");
    QCheckBox *cboPaused = new QCheckBox(u8"已暂停");
    QCheckBox *cboFinished = new QCheckBox(u8"已结束");

    QHBoxLayout *layoutBottom = new QHBoxLayout;
    layoutBottom->addWidget(lbl);
    layoutBottom->addWidget(btnPause);
    layoutBottom->addWidget(btnxActive);
    layoutBottom->addWidget(btnxRevoke);
    layoutBottom->addWidget(cboNoReport);
    layoutBottom->addWidget(cboRuning);
    layoutBottom->addWidget(cboPaused);
    layoutBottom->addWidget(cboFinished);
    layoutBottom->addStretch();
    layoutBottom->setSpacing(20);

    QVBoxLayout *layoutMD = new QVBoxLayout;
    layoutMD->addWidget(m_tbMD);
    layoutMD->addLayout(layoutBottom);

    m_widgetMD->setLayout(layoutMD);
}

void CStockTrade::generateEntrustSurface()
{
    m_widgetEntrust = new QWidget;
    m_modelEntrust = new QStandardItemModel;
    m_tbEntrust = new QTableView;

    QStringList strTitle = QString(u8"委托序号,委托时间,委托状态,证券代码,证券名称,委托方向,价格类型,委托价格,委托数量,委托金额,成交均价,成交数量,成交(%),撤单数量,委托批号,产品名称,单元名称,废单原因,日期").simplified().split(",");;
    m_modelEntrust->setHorizontalHeaderLabels(strTitle);

    m_tbEntrust->setModel(m_modelEntrust);
    m_tbEntrust->show();

    QLabel *lbl = new QLabel;
    QPushButton *btnxNoTrade = new QPushButton(u8"未成");
    QCheckBox *cboTrade = new QCheckBox(u8"已成");
    QCheckBox *cboCanceled = new QCheckBox(u8"已撤");
    QCheckBox *cboWasteOrder = new QCheckBox(u8"废单");

    QHBoxLayout *layoutBottom = new QHBoxLayout;
    layoutBottom->addWidget(lbl);
    layoutBottom->addWidget(btnxNoTrade);
    layoutBottom->addWidget(cboTrade);
    layoutBottom->addWidget(cboCanceled);
    layoutBottom->addWidget(cboWasteOrder);
    layoutBottom->addStretch();
    layoutBottom->setSpacing(20);

    QVBoxLayout *layoutEntrust = new QVBoxLayout;
    layoutEntrust->addWidget(m_tbEntrust);
    layoutEntrust->addLayout(layoutBottom);

    m_widgetEntrust->setLayout(layoutEntrust);
}

void CStockTrade::generateTradeSurface()
{
    m_widgetTrade = new QWidget;
    m_modelTrade = new QStandardItemModel;
    m_tbTrade = new QTableView;

    QStringList strTitle = QString(u8"成交序号,成交时间,证券代码,证券名称,委托方向,成交价格,成交数量,成交金额,交易市场,委托序号,产品名称,单元名称,总费用,日期").simplified().split(",");;
    m_modelTrade->setHorizontalHeaderLabels(strTitle);

    m_tbTrade->setModel(m_modelTrade);
    m_tbTrade->show();

    QLabel *lbl = new QLabel;
    QRadioButton *rbDetail = new QRadioButton(u8"明细");
    QRadioButton *rbEIDSummary = new QRadioButton(u8"委托序号汇总");
    QRadioButton *rbCDSummary = new QRadioButton(u8"代码及方向汇总");
    QRadioButton *rbPCDSummary = new QRadioButton(u8"产品,代码及方向汇总");

    QHBoxLayout *layoutBottom = new QHBoxLayout;
    layoutBottom->addWidget(lbl);
    layoutBottom->addWidget(rbDetail);
    layoutBottom->addWidget(rbEIDSummary);
    layoutBottom->addWidget(rbCDSummary);
    layoutBottom->addWidget(rbPCDSummary);
    layoutBottom->addStretch();
    layoutBottom->setSpacing(20);

    QVBoxLayout *layoutTrade = new QVBoxLayout;
    layoutTrade->addWidget(m_tbTrade);
    layoutTrade->addLayout(layoutBottom);

    m_widgetTrade->setLayout(layoutTrade);
}

void CStockTrade::showNormalEntrust(bool bChecked)
{
     m_pStackLayoutCenter->setCurrentIndex(0);
}

void CStockTrade::showConditionEntrust(bool bChecked)
{
    m_pStackLayoutCenter->setCurrentIndex(1);
}

void CStockTrade::showTZAdvice()
{
    m_pStackLayoutRight->setCurrentIndex(0);
}

void CStockTrade::showGD()
{
    m_pStackLayoutRight->setCurrentIndex(1);
}

void CStockTrade::showMD()
{
    m_pStackLayoutRight->setCurrentIndex(2);
}

void CStockTrade::showEntrust()
{
    m_pStackLayoutRight->setCurrentIndex(3);
}

void CStockTrade::showTrade()
{
    m_pStackLayoutRight->setCurrentIndex(4);
}

void CStockTrade::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    // 反走样
    painter.setRenderHint(QPainter::Antialiasing, true);
    // 设置画笔颜色
    painter.setPen(QColor(160, 160, 160));
    // 绘制直线
    painter.drawLine(QPointF(209, 0), QPointF(209, rect().bottom()));

    // 502
    painter.drawLine(QPointF(517, 0), QPointF(517, rect().bottom()));
}
