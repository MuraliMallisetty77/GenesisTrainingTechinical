#ifndef TICKET_H
#define TICKET_H

#include<cstring>
class Ticket
{
    protected:
    char source[20];
    char destination[20];
    int price;
    public:
        Ticket();
        Ticket(const char*,const char*,int);
        virtual ~Ticket();
        virtual void bookTicket();
        virtual void displayTicketDetails();

        friend std::ostream& operator<<(std::ostream &,Ticket &);
        friend std::istream& operator>>(std::istream &,Ticket &);

        void setSource(const char *s)
        {
            strcpy(source,s);
        }
        char* getSource()
        {
            return source;
        }
        void setDestination(const char *d)
        {
            strcpy(destination,d);
        }
        char* getDestination()
        {
            return destination;
        }
        int getPrice() const { return price; }
        void setPrice(int price_) { price = price_; }

};

#endif // TICKET_H
