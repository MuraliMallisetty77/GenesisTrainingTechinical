#ifndef ENGSTUDENT_H
#define ENGSTUDENT_H
#include<iostream>
#include"Student.h"
class EngStudent:public Student
{
    static int n;
    public:
    EngStudent();
    EngStudent(const char*,int);
    ~EngStudent();
    void accept();
    void display();
    void learnLanguages();
    friend std::ostream& operator<<(std::ostream &os,EngStudent &s);
};

#endif // ENGSTUDENT_H
