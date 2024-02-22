#ifndef HEADER_H
#define HEADER_H

class Book
{
    char name[100];
    char author[100];
    int pages;
public:
    Book();
    Book(const char *,const char*,int);
    ~Book();
    void accept();
    void display();


};

#endif // HEADER_H
