#include "normalEntrust.h"
#include "ui_normalEntrust.h"

CNormalEntrust::CNormalEntrust(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CNormalEntrust),
    m_bLockPN(false),
    m_bLockUnitNum(false),
    m_bLockCode(false),
    m_bLockBS(false),
    m_bLockPriceType(false)
{
    ui->setupUi(this);

    initData();

    ui->labelLockPN->loadImage("./image/lock-open-icon.png");
    ui->labelLockUnitNum->loadImage("./image/lock-open-icon.png");
    ui->labelLockCode->loadImage("./image/lock-open-icon.png");
    ui->labelLockBS->loadImage("./image/lock-open-icon.png");
    ui->labelLockPriceType->loadImage("./image/lock-open-icon.png");

    connect(ui->labelLockPN, SIGNAL(clicked()), this, SLOT(exchangePNImage()));
    connect(ui->labelLockUnitNum, SIGNAL(clicked()), this, SLOT(exchangeUnitNumImage()));
    connect(ui->labelLockCode, SIGNAL(clicked()), this, SLOT(exchangeCodeImage()));
    connect(ui->labelLockBS, SIGNAL(clicked()), this, SLOT(exchangeBSImage()));
    connect(ui->labelLockPriceType, SIGNAL(clicked()), this, SLOT(exchangePriceTypeImage()));
}

CNormalEntrust::~CNormalEntrust()
{
    delete ui;
}

void CNormalEntrust::initData()
{
    m_mapSZPriceType.insert(std::make_pair(u8"限价", 1));
    m_mapSZPriceType.insert(std::make_pair(u8"五档即成转撤销", 4));
    m_mapSZPriceType.insert(std::make_pair(u8"即成剩撤", 2));
    m_mapSZPriceType.insert(std::make_pair(u8"对手方最优", 7));
    m_mapSZPriceType.insert(std::make_pair(u8"本方最优", 6));
    m_mapSZPriceType.insert(std::make_pair(u8"全部成交或撤销", 5));

    m_mapSHPriceType.insert(std::make_pair(u8"限价", 1));
    m_mapSHPriceType.insert(std::make_pair(u8"五档即成转撤销", 4));
    m_mapSHPriceType.insert(std::make_pair(u8"五档即成剩转", 3));

    ui->cboBS->addItem(u8"买入");
    ui->cboBS->addItem(u8"卖出");

}

void CNormalEntrust::exchangePNImage()
{
    if (m_bLockPN)
    {
        if (ui->labelLockPN->loadImage("./image/lock-open-icon.png"))
        {
            m_bLockPN = false;
        }
    }
    else
    {
        if (ui->labelLockPN->loadImage("./image/lock-icon.png"))
        {
            m_bLockPN = true;
        }
    }
}

void CNormalEntrust::exchangeUnitNumImage()
{
    if (m_bLockUnitNum)
    {
        if (ui->labelLockUnitNum->loadImage("./image/lock-open-icon.png"))
        {
            m_bLockUnitNum = false;
        }
    }
    else
    {
        if (ui->labelLockUnitNum->loadImage("./image/lock-icon.png"))
        {
            m_bLockUnitNum = true;
        }
    }
}

void CNormalEntrust::exchangeCodeImage()
{
    if (m_bLockCode)
    {
        if (ui->labelLockCode->loadImage("./image/lock-open-icon.png"))
        {
            m_bLockCode = false;
        }
    }
    else
    {
        if (ui->labelLockCode->loadImage("./image/lock-icon.png"))
        {
            m_bLockCode = true;
        }
    }
}

void CNormalEntrust::exchangeBSImage()
{
    if (m_bLockBS)
    {
        if (ui->labelLockBS->loadImage("./image/lock-open-icon.png"))
        {
            m_bLockBS = false;
        }
    }
    else
    {
        if (ui->labelLockBS->loadImage("./image/lock-icon.png"))
        {
            m_bLockBS = true;
        }
    }
}

void CNormalEntrust::exchangePriceTypeImage()
{
    if (m_bLockPriceType)
    {
        if (ui->labelLockPriceType->loadImage("./image/lock-open-icon.png"))
        {
            m_bLockPriceType = false;
        }
    }
    else
    {
        if (ui->labelLockPriceType->loadImage("./image/lock-icon.png"))
        {
            m_bLockPriceType = true;
        }
    }
}


