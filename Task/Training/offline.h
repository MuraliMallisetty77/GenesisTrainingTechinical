#ifndef OFFLINE_H
#define OFFLINE_H

#include<iostream>
#include<cstring>
#include"training.h"

class Offline:public Training
{
    char location[20];
    int chairs;
    public:
        Offline();
        Offline(const char*,const char*,const char*,int);
        ~Offline();
        void enroll();
        void startTraining();
        void issueCertificate();
        void display();
};

#endif // OFFLINE_H
