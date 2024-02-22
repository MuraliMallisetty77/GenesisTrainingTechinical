#ifndef MEDSTUDENT_H
#define MEDSTUDENT_H
#include<iostream>
#include"Student.h"

class MedStudent:public Student
{
    static int n;
    public:
    MedStudent();
    MedStudent(const char*,int);
    ~MedStudent();
    void accept();
    void display();
    void earnLicense();
    friend std::ostream& operator<<(std::ostream &os,MedStudent &s);
};

#endif // MEDSTUDENT_H
