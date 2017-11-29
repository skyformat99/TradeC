#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

namespace Ui {
class MainWindow;
}

class QVBoxLayout;
class QMenuBar;
class QAction;
class CTitleBar;
class CStockTrade;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initWindow();// 初始化窗口
    void createTitle();// 创建标题栏
    void createMenu();// 创建菜单栏
    void layoutMainWindow();// 布局主窗口

    void associatMenuEvents();// 关联菜单栏事件

public slots:
    void showStockTrade();

private:
    Ui::MainWindow *ui;
    QSize       m_sizeMainWindow;     // 主窗口的大小
    CTitleBar   *m_pTitleBar;         // 标题栏
    QMenuBar    *m_menuBar;           // 菜单栏
    QVBoxLayout *m_pLayoutMainWindow; // 主窗口布局器
    QVBoxLayout *m_playoutContianer;  // 正文布局器

    QWidget     *m_pPlaceHolder;      // 正文占位符
    QAction     *m_actionStockTrade;  // 股票交易

    CStockTrade *m_pStockTrade;
};

#endif // MAINWINDOW_H
