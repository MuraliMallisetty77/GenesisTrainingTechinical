#include<iostream>
#include<cstring>
#include"training.h"
int Training::n=2;
Training::Training()
{
    strcpy(cname,"Murali");
    strcpy(courseName,"CPP");
    duration=n;
}

Training::Training(const char *cn,const char *c)
{
    strcpy(cname,cn);
    strcpy(courseName,c);
    duration=n;
    // strcpy(trainerName,n);
}

Training::~Training()
{
    std::cout<<"\n~Training() called";
}

void Training::enroll()
{
    std::cout<<"\nEnter name:";
    std::cin>>cname;
    std::cout<<"\nEnter course name:";
    std::cin>>courseName;
    std::cout<<"\nEnrolled successfully";
}

void Training::startTraining()
{
    std::cout<<"\nTraining started";
}

void Training::issueCertificate()
{
    std::cout<<"\nCertificate issued";
}

void Training::display()
{
    std::cout<<"\nName:"<<cname<<" course name:"<<courseName<<" duration:"<<duration;
}

std::ostream &operator<<(std::ostream &os, Training &t)
{
    // TODO: insert return statement here
    t.display();
    return os;
}
