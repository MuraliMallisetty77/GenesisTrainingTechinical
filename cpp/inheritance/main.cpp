#include<iostream>
#include"sales.h"
#include<cstring>

int main()
{
    // sales s(2,"ravi",5000,1000,2);
   // s.display();
    //std::cout<<s;
    //std::cout<<s.calculateTotalSalary();
    // Employee *e=new sales();
    // sales s;
    // Employee *e=static_cast<Employee*>(s);
    // std::cout<<e->calculateTotalSalary();
    // e->display();
    // sales *s=dynamic_cast<sales*>(e);
    // if(s!=0)
    //     s->show();
    // else
    //     std::cout<<"\nnothing";
    
    
    sales *e1= new sales;
    std::cout<<e1;
   // e1->display();
    //e1.show();
    //sales s2=static_cast<sales*>(e1);
    //s2.show();
     delete e1;
    return 0;
}