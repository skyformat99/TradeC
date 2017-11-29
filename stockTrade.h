#ifndef STOCKTRADE_H
#define STOCKTRADE_H

#include <QWidget>

class QStackedLayout;
class QStandardItemModel;
class QTableView;
class CQuote;
class CNormalEntrust;
class CConditionEntrust;

class CStockTrade : public QWidget
{
    Q_OBJECT
public:
    explicit CStockTrade(QWidget *parent = 0);

    void layoutLeft();
    void layoutCenter();
    void layoutRight();
    void layoutStockTrade();

    void generateTZAdviceSurface();
    void generateGDSurface();
    void generateMDSurface();
    void generateEntrustSurface();
    void generateTradeSurface();

signals:

public slots:
    void showNormalEntrust(bool bChecked);       // 切换委托界面
    void showConditionEntrust(bool bChecked);    // 切换委托界面

    // 右侧表格切换事件
    void showTZAdvice();
    void showGD();
    void showMD();
    void showEntrust();
    void showTrade();

protected:
    virtual void paintEvent(QPaintEvent *event);

private:
    CQuote *m_pLeft;
    QWidget *m_pCenter;
    QWidget *m_pRight;

    QStackedLayout *m_pStackLayoutCenter;
    CNormalEntrust *m_pNormalEntrust;
    CConditionEntrust *m_pConditionEntrust;


    QStackedLayout *m_pStackLayoutRight;

    // 投资建议表格
    QWidget *m_widgetTZAdvice;
    QStandardItemModel *m_modelTZAdvice;
    QTableView *m_tbTZAdvice;

    // 挂单表格
    QWidget *m_widgetGD;
    QStandardItemModel *m_modelGD;
    QTableView *m_tbGD;

    // 埋单表格
    QWidget *m_widgetMD;
    QStandardItemModel *m_modelMD;
    QTableView *m_tbMD;

    // 委托表格
    QWidget *m_widgetEntrust;
    QStandardItemModel *m_modelEntrust;
    QTableView *m_tbEntrust;

    // 成交表格
    QWidget *m_widgetTrade;
    QStandardItemModel *m_modelTrade;
    QTableView *m_tbTrade;

};

#endif // STOCKTRADE_H
