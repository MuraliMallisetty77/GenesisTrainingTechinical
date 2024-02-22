#include<iostream>
#include<cstring>
class Mydate
{
    int day;
    int month;
    int year;
    public:
        Mydate()
        {
            std::cout<<"mydate() is called\n";
            day=1;
            month=1;
            year=2023;     
        }
        Mydate(int d,int m,int y):day(d),month(m),year(y)
        {
            std::cout<<"mydate(.....) is called\n";
        }
        ~Mydate()
        {
            std::cout<<"~M called";
        }
        friend std::ostream& operator<<(std::ostream &os,Mydate &m)
        {
            os<<m.day<<" "<<m.month<<" "<<m.year;
            return os;
        }
        void display()
        {
            std::cout<<"\nday:"<<day<<" Month:"<<month<<" year:"<<year<<std::endl;
        }
};

class Person
{
    char name[20];
    Mydate dob;
    public:
        Person()
        {
            std::cout<<"person() is calling\n";
            strcpy(name,"Murali");
        }
        Person(const char *n,Mydate d):dob(d)
        {
            std::cout<<"person(....) is calling\n";
            strcpy(name,n);
            
        }
        ~Person()
        {
            std::cout<<"~P called";
        }
        friend std::ostream& operator<<(std::ostream &os,Person &p)
        {
            os<<"\nName:"<<p.name<<" DOB:"<<p.dob;
            return os;
        }
        void display()
        {
            std::cout<<"\nName:"<<name;
            dob.display();
        }
};
int main()
{
    Person p("varsha",Mydate(10,8,2002));
    // p.display();
    // Person p1;
    std::cout<<p;
    //p1.display();
    return 0;

};
