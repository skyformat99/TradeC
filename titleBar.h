#ifndef TITLEBAR_H
#define TITLEBAR_H
#include <QWidget>

class QLabel;
class QPushButton;

class CTitleBar : public QWidget
{
    Q_OBJECT

public:
    explicit CTitleBar(QWidget *parent = 0);
    ~CTitleBar();

protected:
    // 双击标题栏进行界面的最大化/还原
    virtual void mouseDoubleClickEvent(QMouseEvent *event);

    // 进行鼠界面的拖动
    virtual void mousePressEvent(QMouseEvent *event);

    // 设置界面标题与图标
    virtual bool eventFilter(QObject *obj, QEvent *event);

private slots:

    // 进行最小化、最大化/还原、关闭操作
    void onClicked();

private:
    // 最大化/还原
    void updateMaximize();

public:
    void setBkGround(int r, int g, int b);

    // 添加标题栏图标
    //void addTitleIcon(bool bAdd);

    // 添加系统按钮
    void addSysButton(bool bMinBtn, bool bMaxBtn, bool bCloseBtn, QSize sizeBtn);


private:
    QLabel *m_pIconLabel;
    QLabel *m_pTitleLabel;
    QPushButton *m_pMinimizeButton;
    QPushButton *m_pMaximizeButton;
    QPushButton *m_pCloseButton;
};

#endif // TITLEBAR_H
