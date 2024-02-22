#include<iostream>
#include<cstring>
#include"train.h"
#include"bus.h"
int main()
{
    Ticket *t=new Train("Mumbai","Delhi","jghg65",1500);
    Train *tr=dynamic_cast<Train*>(t);
    //t->bookTicket();
    if(tr!=0)
        tr->tatkalBooking();

    t->displayTicketDetails();

    Ticket *t1=new Bus("HYd","Nellore",8961,1500);
    Bus *b=dynamic_cast<Bus*>(t1);
    t1->bookTicket();
    t1->displayTicketDetails();

    delete t;
    delete t1;

    Train t2("fd","ewsa","4es",1234);
    std::cin>>t2;
    std::cout<<t2;

    return 0;
}