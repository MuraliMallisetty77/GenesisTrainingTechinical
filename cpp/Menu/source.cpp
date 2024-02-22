#include<iostream>
#include<cstring>
#include"header.h"
int Student1::n=1;
//int Student1::n1=1;

Student1::Student1()
{
    std::cout<<"\ncalling"<<std::endl;
    rollno=n;
    strcpy(name,"Murali");
    marks=70;
}

Student1::Student1(const char *nm, int m):marks(m)
{
    std::cout<<"\ncalling()"<<std::endl;
    rollno=n;
    strcpy(name,nm);
}

void Student1::accept()
{
    rollno=n;
    n++;
    std::cout<<"enter name:";
    std::cin>>name;
    std::cout<<"enter marks:";
    std::cin>>marks;
}

void Student1::display()
{
    std::cout<<"\nRoll no:"<<rollno<<" Name:"<<name<<" Marks:"<<marks<<std::endl;
}


