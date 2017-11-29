#ifndef LABELCLICK_H
#define LABELCLICK_H
#include <QLabel>
#include <QWidget>


class CLabelClick : public QLabel
{
    Q_OBJECT

public:
    explicit CLabelClick(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    explicit CLabelClick(const QString &text, QWidget *parent=Q_NULLPTR, Qt::WindowFlags f=Qt::WindowFlags());
    ~CLabelClick();

    bool loadImage(QString strFileName);

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent* event);
};

#endif // LABELCLICK_H
