#include<iostream>
#include<cstring>
class Murali
{
    int x,y;
    char *name;
    public:
        char* getName()
        {
            return name;
        }
        Murali()
        {
            x=1;y=1;
            name=new char[10];
            strcpy(name,"Varsha");
        }
        Murali(int x1,int y1)
        {
            x=x1;
            y=y1;
            // name=new char[strlen(n)+1];
            // strcpy(name,n);
        }
        Murali(const char *n)
        {
            name=new char[strlen(n)+1];
            strcpy(name,n);
        }
        void display()
        {
            //std::cout<<x<<" "<<y<<std::endl;
           std::cout<<name;
        }

        // Murali operator+(Murali &p)
        // {
        //     Murali sum;
        //     sum.x=x+p.x;
        //     sum.y=y+p.y;
        //     return sum;
        // }
        Murali& operator++()
        {
            ++x;++y;
            return *this;
        }

        Murali operator++(int)
        {
            Murali temp=*this;
            x++;
            y++;
            return temp;
        }
        char& operator[](int n)
        {
            return name[n];
        }
        friend std::ostream& operator<<(std::ostream &os,Murali &m)
        {
            //m.display();
            os<<m.x<<" "<<m.y<<"\n";
            return os;
        }
        friend std::istream& operator>>(std::istream &os,Murali &m)
        {
            os>>m.x;
            os>>m.y;
            return os;

        }

        Murali& operator-=(int n)
        {
            x=x-n;
            y=y-n;
            return *this;
        }
        bool operator==(Murali &m)
        {
            bool f=false;
            if(x==m.x && y==m.y)
                f=true;
            return f;
        }

};
int main()
{
    // Murali m(2,7);
    // Murali m1(2,7);
    // Murali m2=m+m1;
    //m2.display();
    // Murali m4=m++;
    // m4.display();
    // m.display();
    // Murali m5=++m1;
    // m5.display();
    // Murali m7("Murali");
    // char c=m7[0];
   // std::cout<<c;
    // m7[1]='v';
    // // m7.display();
    // std::cout<<m7;
    // std::cout<<"Enter numbers:";
    // std::cin>>m1;
    // m1.display();

    // std::cin>>m1>>m;
    // std::cout<<m1<<m;
    // m1-=2;
    // m1.display();
    // bool f=m1==m;
    // if(f)
    // std::cout<<"equal";
    // else
    // std::cout<<"not equal";
    // std::cout<<"enter name:";
    char temp[20];
    std::cin>>temp;
    int len=strlen(temp);
    Murali m(temp);
    for(int i=0;i<len;i++)
    {
        m[i]=m[i]+1;
    }
    m.display();
    // Murali m(2,4);
    // ++m;
    // m.display();


    return 0;

}