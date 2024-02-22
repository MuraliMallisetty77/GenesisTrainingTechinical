#ifndef ONLINE_H
#define ONLINE_H

#include<iostream>
#include"training.h"
#include<cstring>

class Online:public Training
{
    char meetingId[20];
    char password[20];
    public:
        Online();
        Online(const char *,const char *,const char*,const char*);
        ~Online();
        void enroll();
        void startTraining();
        void issueCertificate();
        void display();
        void fillForm();
        friend std::ostream& operator<<(std::ostream &os,Online &o);

        void setMeetingId(const char* t)
        {
            strcpy(meetingId,t);
        }
        char* getMeetingId()
        {
            return meetingId;
        }
        void setPassword(const char* c)
        {
            strcpy(password,c);
        }
        char* getPassword()
        {
            return password;
        }

};
#endif // ONLINE_H
