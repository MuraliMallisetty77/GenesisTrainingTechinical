#include<iostream>
#include<cstring>
#include"online.h"

Online::Online()
{
    strcpy(cname,"Ravi");
    strcpy(courseName,"Java");
    strcpy(meetingId,"18hgh76");
    strcpy(password,"hfgb98");
}

Online::Online(const char *cn,const char *c, const char *m, const char *p):Training(cn,c)
{
    strcpy(meetingId,m);
    strcpy(password,p);
}

Online::~Online()
{
    std::cout<<"\n~online() called";
}

void Online::enroll()
{
    Training::enroll();
}

void Online::startTraining()
{
    Training::startTraining();
}

void Online::issueCertificate()
{
    Training::issueCertificate();
}

void Online::display()
{
    Training::display();
    std::cout<<" Meeting id::"<<meetingId<<" password:"<<password;
}

void Online::fillForm()
{
    std::cout<<"\nFill form for attendance";
}

std::ostream &operator<<(std::ostream &os, Online &o)
{
    o.display();
    //Training t=o;
    // Training t=dynamic_cast<Training&>(o);  
    // os<<t;
    return os; 
}
