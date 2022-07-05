#ifndef SHOWWINDOW_H
#define SHOWWINDOW_H

#include <QMainWindow>
#include "managementsysetem.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ShowWindow; }
QT_END_NAMESPACE

class ShowWindow : public QMainWindow
{
    Q_OBJECT

public:
    ShowWindow(QWidget *parent = nullptr);
    ~ShowWindow();
public:
    ManagementSysetem m_ms;
    QString m_temp;//用来得到查找时用户在输入框中输入的值//设置成员变量远比全局变量来的方便
private:
    Ui::ShowWindow *ui;
};
#endif // SHOWWINDOW_H
