#ifndef HEADER_H
#define HEADER_H

enum colors
{
    RED,BLUE,GREEN
};
class Person
{
    char name[20];
    enum colors col;
    public:
        Person();
        Person(const char*,enum colors);
        friend std::ostream& operator<<(std::ostream &os,Person &p);
        void accept();
        void display();
};

#endif // HEADER_H
