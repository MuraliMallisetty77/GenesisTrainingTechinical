#include<iostream>
//#include"employee.h"
#include "sales.h"

sales::sales()
{
    std::cout<<"sales() called"<<std::endl;
    amount=10000;
    crate=10; 
}

sales::sales(int i, const char *n, double sal, double amt, double c):
    Employee(i,n,sal),amount(amt),crate(c)
{
    std::cout<<"sales(.....) called"<<std::endl;
}

sales::~sales()
{
    std::cout<<"\n~sales() called";
}

void sales::accept()
{
}

void sales::display()
{
    Employee::display();
    std::cout<<" Amount:"<<amount<<" commision rate:"<<crate;
}

double sales::calculateTotalSalary()
{
    return Employee::getSalary()+amount*crate;

}

void sales::show()
{
    std::cout<<"\nshow method";
}

std::ostream &operator<<(std::ostream &os, sales &s)
{
    //s.display();
    os<<"Amount:"<<s.amount<<" crate:"<<s.crate<<std::endl;
    Employee e=s;//object slicing
    //Employee e=static_cast<Employee&>(s);//while casting & symbol mandatory
    os<<e;
    //os<<s.getId();
    return os;
}
std::ostream &operator<<(std::ostream &os, sales *s)
{
    //s.display();
    os<<"Amount:"<<s->amount<<" crate:"<<s->crate<<std::endl;
   // Employee e=s;//object slicing
    Employee *e=dynamic_cast<Employee*>(s);//while casting & symbol mandatory
    os<<e;
    //os<<s.getId();
    return os;
}
