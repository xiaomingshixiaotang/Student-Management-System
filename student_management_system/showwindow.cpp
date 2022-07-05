#include "showwindow.h"
#include "ui_showwindow.h"
#include "student.h"
#include "managementsysetem.h"
#include <QDebug>
#include <QAction>
#include <QPushButton>
#include <QMessageBox>
#include <QTableWidget>
#include <QtCharts/QChart>
#include <QLabel>
#include <QTimer>

ShowWindow::ShowWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ShowWindow)
{
    ui->setupUi(this);

    //状态栏添加qlabel用于显示文字
    QLabel* labelStatus = new QLabel("");
    labelStatus->setParent(this);
    ui->statusBar->addWidget(labelStatus);

    //标题字体
    QFont titleFont("文悦后现代体 (须授权) W3-75-J");
    titleFont.setBold(true);
    titleFont.setPointSize(24);
    ui->labelTitle->setFont(titleFont);

    //初始化学生信息
    bool isEmpty = this->m_ms.FileReadJudge();

////解决了初始化时因多读取了一个字符使内容丢失的问题
    if(isEmpty)
    {
        this->m_ms.FileReadInit();
    }

////测试qstringlist和qstring.split的用法////
//    QString testline = "2021302111084 唐明 111";
//    QStringList testlist = testline.split(' ');

//    qDebug() << testlist.at(0).toLocal8Bit().constData();//去引号
//    qDebug() << testlist.at(1);
//    qDebug() << testlist.at(2);

////测试Student类和ManagementSystem类////
//    ManagementSysetem ms;

//    Student s1("10","李白",10);
//    Student s2(s1);
//    Student s3(s1);

//    ms.m_studentArray.push_back(s1);
//    ms.m_studentArray.push_back(s2);
//    ms.m_studentArray.push_back(s3);

//    for (QVector<Student>::iterator it = ms.m_studentArray.begin(); it != ms.m_studentArray.end(); it++)
//    {
//            qDebug() << it->getId() << " " << it->getName() << " " << it->getGrade();
//    }

    //设置显示窗口的相关信息
    this->setWindowTitle("学生管理系统");

    //设置退出功能
    connect(ui->actionQuit,&QAction::triggered,[=](){
        qDebug() << "成功退出";
        this->close();
    });

    //设置默认界面为添加界面
    ui->stackedWidgetChooseFunction->setCurrentIndex(0);

    //点击按钮跳转界面
    connect(ui->a_pushButton,&QPushButton::clicked,[=](){
        ui->stackedWidgetChooseFunction->setCurrentIndex(0);
    });
    connect(ui->d_pushButton,&QPushButton::clicked,[=](){
        ui->stackedWidgetChooseFunction->setCurrentIndex(1);
    });
    connect(ui->c_pushButton,&QPushButton::clicked,[=](){
        ui->stackedWidgetChooseFunction->setCurrentIndex(2);
    });

    //添加功能
    connect(ui->a_pushButtonYes,&QPushButton::clicked,[=](){
        //拿到目前输入框中的数据
        QString tempId = ui->a_lineEditId->text();
        QString tempName = ui->a_lineEditName->text();
        int tempGrade = ui->a_lineEditGrade->text().toInt();

        //创建一个学生对象
        Student tempStudent(tempId,tempName,tempGrade);
        //放到管理系统的数组中
        this->m_ms.m_studentArray.push_back(tempStudent);

////成功，可以拿到相关数据，测试，添加功能是否实现////
//        for (QVector<Student>::iterator it = m_ms.m_studentArray.begin(); it != m_ms.m_studentArray.end(); it++)
//        {
//            qDebug() << it->getId() << " " << it->getName() << " " << it->getGrade();
//        }
////测试，是否能成功写入数据,测试成功////
//        this->m_ms.FileSave();

        //保存文件
        this->m_ms.FileSave();

        //清空输入框操作
        ui->a_lineEditId->clear();
        ui->a_lineEditName->clear();
        ui->a_lineEditGrade->clear();

        //状态同步
        labelStatus->setText("添加成功！");
        QTimer::singleShot(1000,this,[=](){
            labelStatus->setText("");
        });
    });

    //点击取消按钮输入框清空
    connect(ui->a_pushButtonNo,&QPushButton::clicked,[=](){
        //清空输入框操作
        ui->a_lineEditId->clear();
        ui->a_lineEditName->clear();
        ui->a_lineEditGrade->clear();
    });

    //设置默认删除索引方式为学号
    ui->d_stackedWidgetChoose->setCurrentIndex(0);
    //设置索引方式学号被默认选中
    ui->d_radioButtonId->setChecked(1);

    //选中学号，跳到学号输入框,选中姓名，跳到姓名输入框
    connect(ui->d_radioButtonId,&QPushButton::clicked,[=](){
        ui->d_stackedWidgetChoose->setCurrentIndex(0);
    });
    connect(ui->d_radioButtonName,&QPushButton::clicked,[=](){
        ui->d_stackedWidgetChoose->setCurrentIndex(1);
    });

    //删除功能，按学号索引
    connect(ui->d_pushButtonYesId,&QPushButton::clicked,[=](){
        //获得当前输入框中的内容
        QString tempId = ui->d_lineEditId->text();

        //查找要删除的id，如果有，则删除，没有则弹出一个对话框告诉操作者没有该id
        if(this->m_ms.FindId(tempId) != this->m_ms.m_studentArray.end())
        {
            qDebug() << "找到了该id";
            this->m_ms.m_studentArray.erase(this->m_ms.FindId(tempId));

            //重新保存文件
            this->m_ms.FileSave();

            //状态同步
            labelStatus->setText("删除成功！");
            QTimer::singleShot(1000,this,[=](){
                labelStatus->setText("");
            });
        }
        else{
            qDebug() << "没有找到该id";
            //提示
            QMessageBox::warning(this,"提示","未找到此学生");
        }

        //清除信息
        ui->d_lineEditId->clear();

    });
    connect(ui->d_pushButtonNoId,&QPushButton::clicked,[=](){
        ui->d_lineEditId->clear();
    });

    //删除功能，按姓名索引
    connect(ui->d_pushButtonYesName,&QPushButton::clicked,[=](){
        //获得当前输入框中的内容
        QString tempName = ui->d_lineEditName->text();

        //查找要删除的name，如果有，则删除，没有则弹出一个对话框告诉操作者没有该name
        if(this->m_ms.FindName(tempName) != this->m_ms.m_studentArray.end())
        {
            qDebug() << "找到了该name";
            this->m_ms.m_studentArray.erase(this->m_ms.FindName(tempName));

            //重新保存文件
            this->m_ms.FileSave();

            //状态同步
            labelStatus->setText("删除成功！");
            QTimer::singleShot(1000,this,[=](){
                labelStatus->setText("");
            });
        }
        else{
            qDebug() << "没有找到该name";
            //提示
            QMessageBox::warning(this,"提示","未找到此学生");
        }

        //清除信息
        ui->d_lineEditName->clear();
    });
    connect(ui->d_pushButtonNoName,&QPushButton::clicked,[=](){
        ui->d_lineEditName->clear();
    });

    //清空功能 //在添加此功能时出现了莫名其妙的bug，但是又好了
    connect(ui->cle_pushButton,&QPushButton::clicked,[=](){
        //通过用户的返回值判断是否进行清空操作
        if(QMessageBox::Yes ==  QMessageBox::critical(this,"警告","确定要清空所有的学生信息？",QMessageBox::Yes | QMessageBox::No,QMessageBox::No))
        {
            this->m_ms.m_studentArray.clear();
            this->m_ms.FileSave();

            //状态同步
            labelStatus->setText("清空成功！");
            QTimer::singleShot(1000,this,[=](){
                labelStatus->setText("");
            });
        }
    });

    //修改功能
    //设置默认界面为查找界面
    ui->c_stackedWidgetJump->setCurrentIndex(0);
    //设置默认修改索引方式为学号
    ui->c_stackedWidgetChoose->setCurrentIndex(0);
    //设置索引方式学号被默认选中
    ui->c_radioButtonId->setChecked(1);

    //选中学号，跳到学号输入框,选中姓名，跳到姓名输入框
    connect(ui->c_radioButtonId,&QPushButton::clicked,[=](){
        ui->c_stackedWidgetChoose->setCurrentIndex(0);
    });
    connect(ui->c_radioButtonName,&QPushButton::clicked,[=](){
        ui->c_stackedWidgetChoose->setCurrentIndex(1);
    });

    //修改功能，按学号索引
    connect(ui->c_pushButtonYesId,&QPushButton::clicked,[=]() mutable {
        //获得当前输入框中的内容
        QString tempId = ui->c_lineEditId->text();
        this->m_temp = tempId;
        //测试，传值是否正确
        qDebug() << this->m_temp;

        //查找要修改的id，如果有，则修改，跳转一个界面进行修改并将原有数据保留在上面，没有则弹出一个对话框告诉操作者没有该id
        if(this->m_ms.FindId(tempId) != this->m_ms.m_studentArray.end())
        {
            qDebug() << "找到了要修改的学生";
            //跳转页面
            ui->c_stackedWidgetJump->setCurrentIndex(1);

            QVector<Student>::iterator it = this->m_ms.FindId(tempId);
            //修改学生信息
            //将查找的学生信息提前放到输入框中
            ui->ca_lineEditId->setText(it->getId());
            ui->ca_lineEditName->setText(it->getName());
            ui->ca_lineEditGrade->setText(QString::number(it->getGrade()));
        }
        else{
            qDebug() << "没有找到该id";
            //提示
            QMessageBox::warning(this,"提示","未找到此学生");
        }

        //清除信息
        ui->c_lineEditId->clear();
    });
    connect(ui->c_pushButtonNoId,&QPushButton::clicked,[=](){
        ui->c_lineEditId->clear();
    });

    //修改功能，按姓名索引
    connect(ui->c_pushButtonYesName,&QPushButton::clicked,[=](){
        //获得当前输入框中的内容
        QString tempName = ui->c_lineEditName->text();
        this->m_temp = tempName;

        //查找要修改的name，如果有，则修改，跳转一个界面进行修改并将原有数据保留在上面，没有则弹出一个对话框告诉操作者没有该name
        if(this->m_ms.FindName(tempName) != this->m_ms.m_studentArray.end())
        {
            qDebug() << "找到了要修改的学生";
////测试，查看find函数返回的信息是否能够正常打出来，测试完毕，不能正常打出////
//            qDebug() << this->m_ms.FindName(tempName);

            //跳转页面
            ui->c_stackedWidgetJump->setCurrentIndex(1);

            QVector<Student>::iterator it = this->m_ms.FindName(tempName);
            //修改学生信息
            //将查找的学生信息提前放到输入框中
            ui->ca_lineEditId->setText(it->getId());
            ui->ca_lineEditName->setText(it->getName());
            ui->ca_lineEditGrade->setText(QString::number(it->getGrade()));

////测试，是否能通过这种方式得到信息，测试完毕，可以////
//            for (QVector<Student>::iterator it = m_ms.m_studentArray.begin(); it != m_ms.m_studentArray.end(); it++)
//            {
//                qDebug() << it->getId() << " " << it->getName() << " " << it->getGrade();
//            }
//            QVector<Student>::iterator it = this->m_ms.FindName(tempName);//为什么？得出一个小经验，以后最好拿一个值去接收函数的返回值，这里的问题原因猜想是迭代器失效
//            qDebug() << it->getId();
        }
        else{
            qDebug() << "没有找到该name";
            //提示
            QMessageBox::warning(this,"提示","未找到此学生");
        }

        //清除信息
        ui->c_lineEditName->clear();
    });
    connect(ui->c_pushButtonNoName,&QPushButton::clicked,[=](){
        ui->c_lineEditName->clear();
    });

    //用户点击取消，重新返回到修改功能的查找界面
    connect(ui->ca_pushButtonNo,&QPushButton::clicked,[=](){
        ui->c_stackedWidgetJump->setCurrentIndex(0);
    });

    //用户点击确认，将原有的学生删除，新的学生加入到数组中
    connect(ui->ca_pushButtonYes,&QPushButton::clicked,[=](){
        if(this->m_ms.FindId(this->m_temp) != this->m_ms.m_studentArray.end())
        {
            //测试，这里是否找到了要找的人
            qDebug() << this->m_temp;
            QVector<Student>::iterator it = this->m_ms.FindId(this->m_temp);

            qDebug() << "通过id查找保存";
            //拿到目前输入框中的数据
            QString c_tempId = ui->ca_lineEditId->text();
            QString c_tempName = ui->ca_lineEditName->text();
            int c_tempGrade = ui->ca_lineEditGrade->text().toInt();

            //直接调用学生类的函数来更改信息
            it->setId(c_tempId);
            it->setName(c_tempName);
            it->setGrade(c_tempGrade);

            this->m_ms.FileSave();

            //状态同步
            labelStatus->setText("修改成功！");
            QTimer::singleShot(1000,this,[=](){
                labelStatus->setText("");
            });

            ui->c_stackedWidgetJump->setCurrentIndex(0);
        }
        else
        {
            //测试，这里是否找到了要找的人
            qDebug() << this->m_temp;
            QVector<Student>::iterator it = this->m_ms.FindName(this->m_temp);

            qDebug() << "通过name查找保存";
            //拿到目前输入框中的数据
            QString c_tempId = ui->ca_lineEditId->text();
            QString c_tempName = ui->ca_lineEditName->text();
            int c_tempGrade = ui->ca_lineEditGrade->text().toInt();

            //直接调用学生类的函数来更改信息
            it->setId(c_tempId);
            it->setName(c_tempName);
            it->setGrade(c_tempGrade);

            this->m_ms.FileSave();

            //状态同步
            labelStatus->setText("修改成功！");
            QTimer::singleShot(1000,this,[=](){
                labelStatus->setText("");
            });

            ui->c_stackedWidgetJump->setCurrentIndex(0);
        }
    });

    //显示信息
    //实时更新数据
    connect(ui->f_pushButton,&QPushButton::clicked,[=](){
        ui->stackedWidgetChooseFunction->setCurrentIndex(3);

        //设置表格只读
        ui->f_tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);//这是一个全局函数

        int tempSize = this->m_ms.m_studentArray.size();
        //设置行数
        ui->f_tableWidget->setRowCount(tempSize);

        for(int i = 0;i < tempSize;i++)
        {
            for(int j = 0;j < 3;j++)
            {
                if(j == 0)
                {
                    ui->f_tableWidget->setItem(i,0,new QTableWidgetItem(this->m_ms.m_studentArray[i].getId()));
                }
                if(j == 1)
                {
                    ui->f_tableWidget->setItem(i,1,new QTableWidgetItem(this->m_ms.m_studentArray[i].getName()));
                }
                if(j == 2)
                {
                    ui->f_tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(this->m_ms.m_studentArray[i].getGrade())));
                }
            }
        }
    });

    //成绩数据分析
    connect(ui->cal_pushButton,&QPushButton::clicked,[=](){
        ui->stackedWidgetChooseFunction->setCurrentIndex(4);
        ui->cal_tableWidget->setColumnCount(1);

        if(this->m_ms.m_studentArray.size() != 0)
        {
            //计算平均数
            int tempSize = this->m_ms.m_studentArray.size();
            int sum = 0;

            for(int i = 0;i < tempSize;i++)
            {
                sum+=this->m_ms.m_studentArray[i].getGrade();
            }
            //计算出平均数
            int average = sum / tempSize;

            ui->cal_tableWidget->setItem(0,0,new QTableWidgetItem(QString::number(average)));

            //最大数
            int max = 0;
            for(int i = 0;i < tempSize - 1;i++)
            {
                if(this->m_ms.m_studentArray[max].getGrade() < this->m_ms.m_studentArray[i+1].getGrade())
                {
                    max = i+1;
                }
            }
            //得到最大数
            int maxGrade = this->m_ms.m_studentArray[max].getGrade();

            ui->cal_tableWidget->setItem(1,0,new QTableWidgetItem(QString::number(maxGrade)));

            //最小数
            int min = 0;
            for(int i = 0;i < tempSize - 1;i++)
            {
                if(this->m_ms.m_studentArray[min].getGrade() > this->m_ms.m_studentArray[i+1].getGrade())
                {
                    qDebug() << this->m_ms.m_studentArray[min].getGrade();
                    qDebug() << "进入循环";
                    min = i+1;
                }
            }

            qDebug() << min;
            //得到最小数
            qDebug() << this->m_ms.m_studentArray[min].getGrade();
            int minGrade = this->m_ms.m_studentArray[min].getGrade();

            ui->cal_tableWidget->setItem(2,0,new QTableWidgetItem(QString::number(minGrade)));

            //设置内容居中
            for(int i = 0;i < 3;i++)
            {
                ui->cal_tableWidget->item(i,0)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            }
        }

    });
}

ShowWindow::~ShowWindow()
{
    delete ui;
}

