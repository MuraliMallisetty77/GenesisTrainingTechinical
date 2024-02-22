#include<iostream>
#include<cstring>
class Employee
{
    int id;
    char *name;
    static int cnt;
    Employee()
    {
        id=cnt;
        cnt++;
        name=new char[10];
        strcpy(name,"Varsha");
    }
public:
    
    Employee(const char *n)
    {
        id=cnt;
        cnt++;
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
    ~Employee()
    {
        std::cout<<"\ncalled\n";
        delete name;
    }
    void accept()
    {
        id=cnt;
        cnt++;
        char temp[50];
        std::cout<<"enter name:"<<std::endl;
        std::cin>>temp;
        name=new char[strlen(temp)+1];
        strcpy(name,temp);

    }
    void display()
    {
        std::cout<<"\nId:"<<id<<" name:"<<name<<std::endl; 
    }
    Employee(Employee &e)
    {
        id=e.id;
        name=new char[strlen(e.name)+1];
        strcpy(name,e.name);
    }
};
int Employee::cnt=1;

int main()
{
    // Employee e;
    // e.display();
    Employee e1("Murali");
    e1.display();
    // Employee e2(e1);
    // e2.display();
    // int n=2;
    // Employee *e4=new Employee[n];
    // for(int i=0;i<n;i++)
    // {
    //     e4[i].accept();
    //     e4[i].display();
    // }
    // delete []e4;
    
    return 0;
}