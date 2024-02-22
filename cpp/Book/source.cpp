#include<iostream>
#include<cstring>
#include"header.h"

Book::Book()
{
    strcpy(name,"run away");
    strcpy(author,"Murali");
    pages=100;
}

Book::Book(const char *n, const char *a, int p):pages(p)
{
    strcpy(name,n);
    strcpy(author,a);
    //pages=p;
}

Book::~Book()
{
    //std::cout<<"caled";
}

void Book::accept()
{

}

void Book::display()
{
    std::cout<<"\nName:"<<name<<" Author:"<<author<<" pages:"<<pages<<std::endl;
}
