#include<iostream>
#include<cstring>
#include"offline.h"

Offline::Offline()
{
    strcpy(cname,"Ravi");
    strcpy(courseName,"Java");
    strcpy(location,"Pune");
    chairs=100;
}

Offline::Offline(const char *cn, const char *c, const char *l, int ch):Training(cn,c),chairs(ch)
{
    strcpy(location,l);
}

Offline::~Offline()
{
    std::cout<<"\n~Offline() called";
}

void Offline::enroll()
{
    Training::enroll();
}

void Offline::startTraining()
{
    Training::startTraining();
}

void Offline::issueCertificate()
{
    Training::issueCertificate();
}

void Offline::display()
{
    Training::display();
    std::cout<<" location:"<<location<<" chairs:"<<chairs;
}
