#include<iostream>
#include "Engstudent.h"
#include<cstring>
int EngStudent::n=526;
EngStudent::EngStudent()
{
    id=n;
    strcpy(name,"Ravi");
    marks=70;
}

EngStudent::EngStudent(const char *na, int m):Student(na,m)
{
    id=n;
    n++;
}

EngStudent::~EngStudent()
{
    std::cout<<"~EngStudent() called";
}

void EngStudent::accept()
{
    id=n++;
    Student::accept();
}

void EngStudent::display()
{
   Student::display();
}

void EngStudent::learnLanguages()
{
    std::cout<<"\nEngineering students need to learn new programming languages";
}

std::ostream& operator<<(std::ostream &os,EngStudent &s)
{
    s.display();
    return os;
}
