#include "titleBar.h"
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QEvent>
#include <QMouseEvent>
#include <QApplication>
#include <QFile>
#include <QTextStream>

#ifdef Q_OS_WIN
#pragma comment(lib, "user32.lib")
#include <qt_windows.h>
#endif

CTitleBar::CTitleBar(QWidget *parent/* = 0*/)
    :QWidget(parent),
      m_pMinimizeButton(NULL),
      m_pMaximizeButton(NULL),
      m_pCloseButton(NULL)
{
    setFixedHeight(30);// 标题栏的高度

    m_pIconLabel = new QLabel(this);
    m_pTitleLabel = new QLabel(this);

    QPalette pal(palette());
    pal.setColor(QPalette::Background, QColor(50, 50, 50));
    setAutoFillBackground(true);
    setPalette(pal);

    m_pIconLabel->setFixedSize(20, 20);
    m_pIconLabel->setObjectName("titleIcon");

    m_pTitleLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    m_pTitleLabel->setObjectName("whiteLabel");


}

CTitleBar::~CTitleBar()
{

}

void CTitleBar::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    if (m_pMaximizeButton)
        emit m_pMaximizeButton->clicked();
}

void CTitleBar::mousePressEvent(QMouseEvent *event)
{
#ifdef Q_OS_WIN
    if (ReleaseCapture())
    {
        QWidget *pWindow = this->window();
        if (pWindow->isTopLevel())
        {
           SendMessage(HWND(pWindow->winId()), WM_SYSCOMMAND, SC_MOVE + HTCAPTION, 0);
        }
    }
       event->ignore();
#else
#endif
}

bool CTitleBar::eventFilter(QObject *obj, QEvent *event)
{
    switch (event->type())
    {
    case QEvent::WindowTitleChange:
    {
        QWidget *pWidget = qobject_cast<QWidget *>(obj);
        if (pWidget)
        {
            m_pTitleLabel->setText(pWidget->windowTitle());
            return true;
        }
    }
    case QEvent::WindowIconChange:
    {
        QWidget *pWidget = qobject_cast<QWidget *>(obj);
        if (pWidget)
        {
            QIcon icon = pWidget->windowIcon();
            m_pIconLabel->setPixmap(icon.pixmap(m_pIconLabel->size()));
            return true;
        }
    }
    case QEvent::WindowStateChange:
    case QEvent::Resize:
        updateMaximize();
        return true;
    }
    return QWidget::eventFilter(obj, event);
}

void CTitleBar::onClicked()
{
    QPushButton *pButton = qobject_cast<QPushButton *>(sender());
    QWidget *pWindow = this->window();
    if (pWindow->isTopLevel())
    {
        if (pButton == m_pMinimizeButton)
        {
            pWindow->showMinimized();
        }
        else if (pButton == m_pMaximizeButton)
        {
            pWindow->isMaximized() ? pWindow->showNormal() : pWindow->showMaximized();
        }
        else if (pButton == m_pCloseButton)
        {
            pWindow->close();
        }
    }
}

void CTitleBar::updateMaximize()
{
    QWidget *pWindow = this->window();
    if (pWindow->isTopLevel())
    {
        bool bMaximize = pWindow->isMaximized();
        if (bMaximize)
        {
            if (m_pMaximizeButton)
            {
                m_pMaximizeButton->setToolTip(tr(u8"还原"));
                m_pMaximizeButton->setProperty("maximizeProperty", "restore");
            }
        }
        else
        {
            if (m_pMaximizeButton)
            {
                m_pMaximizeButton->setProperty("maximizeProperty", "maximize");
                m_pMaximizeButton->setToolTip(tr(u8"最大化"));
            }
        }

        if (m_pMaximizeButton)
            m_pMaximizeButton->setStyle(QApplication::style());
    }
}

void CTitleBar::setBkGround(int r, int g, int b)
{
    QPalette pal(palette());
    pal.setColor(QPalette::Background, QColor(r, g, b));
    setAutoFillBackground(true);
    setPalette(pal);
}

void CTitleBar::addSysButton(bool bMinBtn, bool bMaxBtn, bool bCloseBtn, QSize sizeBtn)
{
    QHBoxLayout *pLayout = new QHBoxLayout(this);
    pLayout->addWidget(m_pIconLabel);
    pLayout->addSpacing(5);
    pLayout->addWidget(m_pTitleLabel);

    if (bMinBtn)
    {
        m_pMinimizeButton = new QPushButton(this);
        m_pMinimizeButton->setFixedSize(sizeBtn);
        m_pMinimizeButton->setObjectName("minimizeButton");
        m_pMinimizeButton->setToolTip(u8"最小化");
        pLayout->addWidget(m_pMinimizeButton);
        connect(m_pMinimizeButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));
    }

    if (bMaxBtn)
    {
        m_pMaximizeButton = new QPushButton(this);
        m_pMaximizeButton->setFixedSize(sizeBtn);
        m_pMaximizeButton->setObjectName("maximizeButton");
        m_pMaximizeButton->setToolTip(u8"最大化");
        pLayout->addWidget(m_pMaximizeButton);
        connect(m_pMaximizeButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));
    }

    if (bCloseBtn)
    {
        m_pCloseButton = new QPushButton(this);
        m_pCloseButton->setFixedSize(sizeBtn);
        m_pCloseButton->setObjectName("closeButton");
        m_pCloseButton->setToolTip(u8"关闭");
        pLayout->addWidget(m_pCloseButton);
        connect(m_pCloseButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));
    }

    pLayout->setSpacing(0);
    pLayout->setContentsMargins(5, 0, 0, 0);
    setLayout(pLayout);
}
