#include "managementsysetem.h"
#include <QFile>
#include <QDebug>

ManagementSysetem::ManagementSysetem()
{
}

void ManagementSysetem::FileSave()
{
    qDebug() << "向文件中写入数据";
    QFile data("F:\\stu_info.txt");
    if (data.open(QFile::WriteOnly))
    {
        QTextStream out(&data);
        for (QVector<Student>::iterator it = this->m_studentArray.begin(); it != this->m_studentArray.end(); it++)
        {
            out << it->getId() << " " << it->getName() << " " << it->getGrade() << endl;
        }
    }
}

QVector<Student>::iterator ManagementSysetem::FindId(QString id)
{
    for (QVector<Student>::iterator it = this->m_studentArray.begin(); it != this->m_studentArray.end(); it++)
    {
        if(it->getId() == id)
        {
            return it;
        }
    }

    //返回end(),即返回最后一个元素的指针的下一位
    return this->m_studentArray.end();
}

QVector<Student>::iterator ManagementSysetem::FindName(QString name)
{
    for (QVector<Student>::iterator it = this->m_studentArray.begin(); it != this->m_studentArray.end(); it++)
    {
        if(it->getName() == name)
        {
            return it;
        }
    }

    //返回end(),即返回最后一个元素的指针的下一位
    return this->m_studentArray.end();
}

bool ManagementSysetem::FileReadJudge()
{
    QFile data("F:\\stu_info.txt");
    if (data.open(QFile::ReadOnly))
    {
        qDebug() << "读文件判断文件中是否存在内容";
        QTextStream in(&data);

////该功能对下面真正的初始化有一定的影响，但会保证程序不会崩溃，在某些初始化的时候？文件存在但没有记录////
        char ch;
        in >> ch;
        if (in.atEnd())
        {
            qDebug() << "文件存在但没有记录";
            return false;
        }
    }
    else
    {
        qDebug() << "文件不存在";
        return false;
    }

    return true;
}

void ManagementSysetem::FileReadInit()
{
    QFile data("F:\\stu_info.txt");
    if (data.open(QFile::ReadOnly))
    {
        qDebug() << "读文件初始化学生信息数组";
        QTextStream in(&data);

        //文件存在且有记录
        while(!in.atEnd())
        {
            qDebug() << "文件里有记录";
            QString tempLine = in.readLine();

////测试，查看问题出现在readline还是出现在split 结论：问题出现在readline////
//            qDebug() << tempLine;

            QStringList tempList;
            //拿到每个人信息数据的列表
            tempList = tempLine.split(' ');
            QString tempId = tempList.at(0);
            QString tempName = tempList.at(1);
            int tempGrade = tempList.at(2).toInt();
            //进行数据读取
            Student tempStudent(tempId,tempName,tempGrade);
            this->m_studentArray.push_back(tempStudent);
        }
//////测试读取是否成功////
        for (QVector<Student>::iterator it = this->m_studentArray.begin(); it != this->m_studentArray.end(); it++)
        {
            qDebug() << it->getId() << " " << it->getName() << " " << it->getGrade();
        }
    }
}
