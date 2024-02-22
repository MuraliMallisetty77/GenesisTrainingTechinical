#include<iostream>
#include<cstring>
#include"bus.h"

Bus::Bus()
{
    strcpy(source,"Pune");
    strcpy(destination,"Hyd");
    busNo=5334;
    price=1200;
}

Bus::Bus(const char *s, const char *d, int b, int p):Ticket(s,d,p),busNo(b)
{
}

Bus::~Bus()
{
    std::cout<<"\n~Bus() called";
}

void Bus::bookTicket()
{
     std::cout<<"\nBus ticket booked succesfully";
}

void Bus::displayTicketDetails()
{
    std::cout<<"\nBus no:"<<busNo<<" ";
    Ticket::displayTicketDetails();
}
