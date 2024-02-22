#include<iostream>
#include"header.h"

Rectangle::Rectangle()
{
    length=2;
    breadth=2;
}

Rectangle::Rectangle(int l = 0, int b = 0)
{
    length=l;
    breadth=b;
}

Rectangle::~Rectangle()
{
    std::cout<<"\ncalled";
}

void Rectangle::accept()
{
    std::cout<<"Enter length:";
    std::cin>>length;
    std::cout<<"Enter breadth:";
    std::cin>>breadth;
}

void Rectangle::display()
{
    std::cout<<"\n length:"<<length<<" breadth:"<<breadth<<std::endl;

}

int Rectangle::calArea(int l,int b)
{
    int area;
    area=l*b;
    return area;
}
int Rectangle::calaculate()
{
    int area;
    
    return 0;
}
int Rectangle::calPeri(int l, int b)
{
    int peri;
    peri=(l+b)/2;
    return peri;
}
