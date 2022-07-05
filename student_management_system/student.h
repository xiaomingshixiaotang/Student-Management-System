#ifndef STUDENT_H
#define STUDENT_H
#include <QString>


class Student
{
public:
    Student();

    Student(QString id,QString name,int grade);

    //添加读写接口
    //读
    QString getId();
    QString getName();
    int getGrade();

    //写
    void setId(QString id);
    void setName(QString name);
    void setGrade(int grade);
private:
    QString m_id;
    QString m_name;
    int m_grade;
};

#endif // STUDENT_H
