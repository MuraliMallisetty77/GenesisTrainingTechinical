#include<iostream>
#include<cstring>

class Point
{
    int x,y;
    char name[30];
    public:
        Point()
        {
            x=3;
            y=5;
            strcpy(name,"hello");
        }
        Point(int x1,int y1)//const char *n)
        {
            this->x=x1;
            y=y1;
            // strcpy(name,n);

        }
        Point(Point &p)
        {
            std::cout<<"\ncopy called";
            x=p.x;
            y=p.y;
        }
        void display()
        {
            std::cout<<"\nx:"<<x;
            std::cout<<"\ty:"<<y;
           // std::cout<<name;

        }
        Point operator +(Point &p)
        {
            Point sumobj;
            sumobj.x=x+p.x;
            sumobj.y=this->y+p.y;
            return sumobj;

        }
        Point operator -(Point &p)
        {
            Point subobj;
            subobj.x=x-p.x;
            subobj.y=y-p.y;
            return subobj;
        }
        Point operator *(Point &p)
        {
            Point mul;
            mul.x=x*p.x;
            mul.y=y*p.y;
            return mul;
        }
        Point operator /(Point &p)
        {
            Point div;
            div.x=x/p.x;
            div.y=y/p.y;
            return div;
        }
        bool operator ==(Point &p)
        {
            bool flag=false;
            if(x==p.x && y==p.y)
            flag=true;
            return flag;
        }

        bool operator !=(Point &p)
        {
            bool flag=false;
            if(x!=p.x && y!=p.y)
            flag=true;
            return flag;

        }
        Point& operator ++()
        {
            ++x;
            ++y;
            return *this;

        }
        Point operator ++(int )
        {
            Point temp=*this;
            x++;
            y++;
            return temp;
        }
        Point& operator -=(int n)
        {
            x=x-n;
            y=y-n;
            return *this;
            
        }
        void operator() ()
        {
            display();
        }

        char& operator[](int n)
        {
            return name[n];
        }

};

int main()
{
    Point p1(2,8);
    Point p2(2,8);
    // Point p3=p1+p2;
    // p3.display();
    // Point p4=p1-p2;
    // p4.display();
    // Point p5=p1*p2;
    // p5.display();
    // Point p6=p1/p2;
    // p6.display();
    // bool flag= p1==p2;
    // if(flag)
    // std::cout<<"both are equal";
    // else
    // std::cout<<"not equal";
    // bool flag= p1!=p2;
    Point p7=++p1;
    p7.display();
    p2++;
    // p2.display();
    ++p1;
    // p1.display();

    // Point p8=p1++;
    // p8.display();
    // p1.display();
    // Point p("Varsha");
    // char c=p[0];
    // std::cout<<c<<std::endl;
    // p[1]='M';
    // p.display();
    // Point p3=p1-=2;
    // p3.display();
    //p1();


}