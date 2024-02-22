#include<iostream>
#include<cstring>
#include"train.h"

Train::Train()
{
    strcpy(source,"Pune");
    strcpy(destination,"Hyd");
    strcpy(trainNo,"2345bh");
    price=1200;

}

Train::Train(const char *s, const char *d, const char *t, int p):Ticket(s,d,p)
{
    strcpy(trainNo,t);
}

Train::~Train()
{
    std::cout<<"\n~Train() called";
}

void Train::bookTicket()
{
    std::cout<<"\nTrain ticket booked succesfully";
}

void Train::displayTicketDetails()
{
    std::cout<<"\nTrain no:"<<trainNo<<" ";
    Ticket::displayTicketDetails();
}

void Train::tatkalBooking()
{
    std::cout<<"\nTrai ticket booked in tatkal";
}

std::ostream &operator<<(std::ostream &os, Train &t)
{
    t.displayTicketDetails();   
    return os;
}

std::istream &operator>>(std::istream &is, Train &t)
{
    std::cout<<"\nEnter train no:";
    is>>t.trainNo;
   // Ticket tk=t;//object slicing
    Ticket tk=static_cast<Ticket&>(t);
    is>>tk;
    return is;
}
