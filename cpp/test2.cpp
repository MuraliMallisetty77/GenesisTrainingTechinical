#include<iostream>
#include<cstring>
enum HOBBIES
{
    READING,SLEEPING,EATING
};
class Person
{
    char name[10];
    enum HOBBIES h;
    public:
        Person()
        {
            strcpy(name,"chandra");
            h=READING;   
        }
        Person(const char *n,enum HOBBIES hb)
        {
            strcpy(name,n);
            h=hb;
        }
        ~Person()
        {
            //std::cout<<"\ncalled";
        }
        friend std::ostream& operator<<(std::ostream &os,Person &p)
        {
            os<<"\nname:"<<p.name;
            switch(p.h)
            {
                case 0:
                    os<<" Hoobie:Reading\n";
                    break;
                case 1:
                    os<<" Hoobie:Sleeping\n";
                    break;
                case 2:
                    os<<" Hoobie:Eating\n";
                    break;
            }
            return os;
        }
        void accept()
        {
            std::cout<<"entre name:";
            std::cin>>name;
            int n;
            std::cout<<"enter hobbie 0-RUNNING,1-SLEEPING,2-EATING:";
            std::cin>>n;

            switch(n)
            {
                case 0:
                    h=READING;
                    break;
                case 1:
                    h=SLEEPING;
                    break;
                case 2:
                    h=EATING;
                    break;
            }
        }
        void display()
        {
            std::cout<<"\nName:"<<name;
            switch(h)
            {
                case READING:
                    std::cout<<" Hobbie:Reading\n";
                    break;
                case SLEEPING:
                    std::cout<<" Hobbie:Sleeping\n";
                    break;
                case EATING:
                    std::cout<<" Hobbie:Eating\n";
                    break;
            }
        }
};

int main()
{
    // Person p("varsha",READING);
    // p.display();
    Person p1("Ravi",SLEEPING);
    std::cout<<p1;
    p1.accept();
    std::cout<<p1;
    // p1.display();
    // p1.accept();
    // p1.display();
}