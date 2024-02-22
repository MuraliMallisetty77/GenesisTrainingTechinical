#include<iostream>
#include"header.h"
#include<cstring>
Person::Person()
{
    strcpy(name,"Murali");
    col=BLUE;
}
Person::Person(const char *n,enum colors color)
{
    strcpy(name,n);
    col=color;
}
void Person::accept()
{
    std::cout<<"enter name:";
    std::cin>>name;
    int n;
    std::cout<<"enter color 0-RED,1-BLUE,2-GREEN:";
    std::cin>>n;
    switch(n)
    {
        case 0:
            col=RED;
            break;
        case 1:
            col=BLUE;
            break;
        case 2:
            col=GREEN;
            break;    
    }
}
std::ostream& operator<<(std::ostream &os,Person &p)
{
    os<<"\nName:"<<p.name<<std::endl;
    switch(p.col)
    {
        case RED:
            std::cout<<"RED";
            break;
        case BLUE:
            std::cout<<"BLUE";
            break;
        case GREEN:
            std::cout<<"GREEN";
            break;  
    }

}

void Person::display()
{
    std::cout<<"\nName:"<<name<<std::endl;
    switch(col)
    {
        case RED:
            std::cout<<"RED";
            break;
        case BLUE:
            std::cout<<"BLUE";
            break;
        case GREEN:
            std::cout<<"GREEN";
            break;  
    }
}
