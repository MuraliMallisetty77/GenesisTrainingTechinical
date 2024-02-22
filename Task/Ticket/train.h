#ifndef TRAIN_H
#define TRAIN_H

#include<iostream>
#include<cstring>
#include"ticket.h"
class Train:public Ticket
{
    char trainNo[20];
    public:
        Train();
        Train(const char*,const char*,const char*,int);
        ~Train();
        void bookTicket();
        void displayTicketDetails();
        void tatkalBooking();
        friend std::ostream& operator<<(std::ostream &,Train &);
        friend std::istream& operator>>(std::istream &,Train &);

        void setTrainNo(const char *t)
        {
            strcpy(trainNo,t);
        }
        char* getTrainNo()
        {
            return trainNo;
        }
};

#endif // TRAIN_H
