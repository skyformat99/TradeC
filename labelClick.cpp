#include "labelClick.h"
#include <QMouseEvent>

CLabelClick::CLabelClick(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent)
{
}

CLabelClick::CLabelClick(const QString &text, QWidget *parent, Qt::WindowFlags f)
    : QLabel(text, parent)
{

}

CLabelClick::~CLabelClick()
{

}

bool CLabelClick::loadImage(QString strFileName)
{
    QPixmap pixmap(strFileName);
    if (!pixmap.isNull())
    {
        setPixmap(pixmap);
        setScaledContents(true);
        return true;
    }

    return false;
}

void CLabelClick::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        emit clicked();
    }

    QLabel::mousePressEvent(event);//将该事件传给父类处理
}
