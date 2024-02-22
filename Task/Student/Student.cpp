#include<iostream>
#include"Student.h"
#include<cstring>
int Student::n=1;
Student::Student()
{
    id=n;
    strcpy(name,"Murali");
    marks=50;
}

Student::Student(const char *na,int m):marks(m)
{
    id=n;
    n++;
    strcpy(name,na);
}
Student::~Student()
{
    std::cout<<"\n~Student() called";
}

void Student::accept()
{
    // id=n;
    // n++;
    // std::cout<<"\nEnter id:";
    // std::cin>>id;
    std::cout<<"\nEnter name:";
    std::cin>>name;
    std::cout<<"\nEnter marks:";
    std::cin>>marks;
}
void Student::display()
{
    std::cout<<"\nID:"<<id<<" Name:"<<name<<" Marks:"<<marks<<std::endl;
}

std::ostream& operator<<(std::ostream &os,Student &s)
{
    s.display();
    return os;
}