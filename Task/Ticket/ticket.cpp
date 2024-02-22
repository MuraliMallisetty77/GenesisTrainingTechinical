#include<iostream>
#include<cstring>
#include"ticket.h"

Ticket::Ticket()
{
    strcpy(source,"Pune");
    strcpy(destination,"Hyd");
    price=1200;
}

Ticket::Ticket(const char *s, const char *d, int p):price(p)
{
    strcpy(source,s);
    strcpy(destination,d);
}

Ticket::~Ticket()
{
    std::cout<<"\n~Ticket() called";
}

void Ticket::bookTicket()
{
    std::cout<<"\nTicket booked successfully";
}

void Ticket::displayTicketDetails()
{
    std::cout<<"Source:"<<source<<" Destination:"<<destination<<" price:"<<price;
}

std::ostream &operator<<(std::ostream &os, Ticket &t)
{
    t.displayTicketDetails();
    return os;
}

std::istream &operator>>(std::istream &is, Ticket &t)
{
    std::cout<<"\nEnter source:";
    is>>t.source;
    std::cout<<"\nEnter destination:";
    is>>t.destination;
    std::cout<<"\nEnter price:";
    is>>t.price;
    return is;
}
