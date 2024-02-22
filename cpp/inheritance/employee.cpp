#include<iostream>
#include"employee.h"
#include<cstring>

Employee::Employee()
{
    std::cout<<"Employee() called"<<std::endl;
    id=1;
    strcpy(name,"Murali");
    salary=300000;
}

Employee::Employee(int i,const char *n,double s):id(i),salary(s)
{
    std::cout<<"Employee(.....) called"<<std::endl;
    strcpy(name,n);
}

double Employee:: calculateTotalSalary()
{
    return salary;

}

Employee::~Employee()
{
    std::cout<<"\n~Employee() called";
}

void Employee::accept()
{

}

void Employee::display()
{
    std::cout<<"\nId:"<<id<<" Name:"<<name<<" Salary:"<<salary;

}

std::ostream &operator<<(std::ostream &os, Employee &e)
{
   // e.display();
    os<<"\nId:"<<e.id<<" Name:"<<e.name<<" Salary:"<<e.salary;
    return os;
}
std::ostream &operator<<(std::ostream &os, Employee *e)
{
   // e.display();
    os<<"\nId:"<<e->id<<" Name:"<<e->name<<" Salary:"<<e->salary;
    
    return os;
}
