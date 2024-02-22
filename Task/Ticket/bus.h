#ifndef BUS_H
#define BUS_H

#include<iostream>
#include"ticket.h"
class Bus:public Ticket
{
    int busNo;
    public:
        Bus();
        Bus(const char*,const char*,int,int);
        ~Bus();
        void bookTicket();
        void displayTicketDetails();

        int getBusNo() const { return busNo; }
        void setBusNo(int busNo_) { busNo = busNo_; }

};

#endif // BUS_H
