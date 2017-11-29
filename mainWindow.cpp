#include "mainWindow.h"
#include "ui_mainWindow.h"
#include <QDesktopWidget>
#include <QMenuBar>
#include <QVBoxLayout>
#include <QFile>
#include "titleBar.h"
#include "stockTrade.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow),
    m_pTitleBar(NULL),
    m_menuBar(NULL),
    m_pLayoutMainWindow(NULL),
    m_playoutContianer(NULL),
    m_pStockTrade(NULL)
{
    ui->setupUi(this);

    initWindow();
    createTitle();
    createMenu();

    layoutMainWindow();

    showStockTrade();

    setWindowTitle(u8"这是标题");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initWindow()
{
    setObjectName("mainWindow");

    QDesktopWidget* pDesktop = QApplication::desktop();
    //获取可用桌面大小
    QRect deskRect = pDesktop->availableGeometry();
    //获取主屏幕分辨率
    QRect screenRect = pDesktop->screenGeometry();

    m_sizeMainWindow.setWidth(screenRect.width()-200);
    m_sizeMainWindow.setHeight(screenRect.height()-200);

    // 设置窗口无边框、无默认标题栏
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());

    // 设置程序在任务栏和主窗口左上角的图标
    setWindowIcon(QIcon("./image/app.ico"));

    // 设置窗口大小
    setFixedSize(m_sizeMainWindow);


    move((pDesktop->width() - width()) / 2, (pDesktop->height() - height()) / 2);
}

void MainWindow::createTitle()
{
    // 创建标题栏
    m_pTitleBar = new CTitleBar;
    installEventFilter(m_pTitleBar);
    m_pTitleBar->setBkGround(172, 205, 240);
    m_pTitleBar->addSysButton(true, true, true, QSize(28,28));
}

void MainWindow::createMenu()
{
    m_menuBar = new QMenuBar;
    m_menuBar->setFixedHeight(28);
    QMenu *menuCommonFunc = m_menuBar->addMenu(u8"常用功能");
    QMenu* menuTrade = m_menuBar->addMenu(u8"交易");
    m_actionStockTrade = menuTrade->addAction(u8"股票交易");
    //m_actionNew->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_N));
    m_menuBar->setStyleSheet("background-color:rgb(255,193,193);");

    associatMenuEvents();
}

void MainWindow::layoutMainWindow()
{
    m_pLayoutMainWindow = new QVBoxLayout;

    // 向主窗口布局器添加标题
    if (m_pTitleBar)
    {
        m_pLayoutMainWindow->addWidget(m_pTitleBar);
    }

    // 向主窗口布局器添加菜单
    if (m_menuBar)
    {
        m_pLayoutMainWindow->addWidget(m_menuBar);
    }

    // 向主窗口布局器添加正文
    if (m_playoutContianer)
    {
        m_pLayoutMainWindow->addLayout(m_playoutContianer);
    }

    if (m_pLayoutMainWindow)
    {
        // 设置主窗口布局器的属性
        m_pLayoutMainWindow->setMargin(0);
        m_pLayoutMainWindow->setSpacing(0);
        //m_pLayoutMainWindow->addStretch();
        m_pPlaceHolder = new QWidget;
        m_pLayoutMainWindow->addWidget(m_pPlaceHolder);

        // 将主窗口布局器应用到主窗口
        setLayout(m_pLayoutMainWindow);
    }

    QFile file("./qss/main.qss");
    if (file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QString str = file.readAll();
        setStyleSheet(str);
    }
}

void MainWindow::associatMenuEvents()
{
    //connect(m_actionStockTrade, SIGNAL(triggered()), this, SLOT(showStockTrade()));
}

void MainWindow::showStockTrade()
{
    //if (m_pPlaceHolder)
    {
        m_pStockTrade = new CStockTrade;
        m_pLayoutMainWindow->replaceWidget(m_pPlaceHolder, m_pStockTrade);
        delete  m_pPlaceHolder;
        m_pPlaceHolder = NULL;
    }
}

