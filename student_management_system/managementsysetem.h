#ifndef MANAGEMENTSYSETEM_H
#define MANAGEMENTSYSETEM_H
#include <QVector>
#include "student.h"
#include "ui_showwindow.h"

class ManagementSysetem
{
public:
    ManagementSysetem();

    //写文件操作
    void FileSave();

    //按学号索引
    QVector<Student>::iterator FindId(QString id);

    //按姓名索引
    QVector<Student>::iterator FindName(QString name);

    //读文件判断文件是否存在及文件里是否有内容
    bool FileReadJudge();

    //读文件初始化学生信息数组
    void FileReadInit();

public:
    //一个维护学生信息的动态数组
    QVector<Student> m_studentArray;

    //文件是否为空的标志
//    bool m_fileIsEmpty;//一加这行程序崩溃？
};

#endif // MANAGEMENTSYSETEM_H
