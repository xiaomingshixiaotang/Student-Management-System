#include "student.h"

Student::Student()
{

}

Student::Student(QString id, QString name, int grade)
{
    this->m_id = id;
    this->m_name = name;
    this->m_grade = grade;
}

QString Student::getId()
{
    return this->m_id;
}

QString Student::getName()
{
    return this->m_name;
}

int Student::getGrade()
{
    return this->m_grade;
}

void Student::setId(QString id)
{
    this->m_id = id;
}

void Student::setName(QString name)
{
    this->m_name = name;
}

void Student::setGrade(int grade)
{
    this->m_grade = grade;
}
