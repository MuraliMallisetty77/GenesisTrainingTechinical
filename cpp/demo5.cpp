#include<iostream>
#include<cstring>
#include<string>
class Mobile
{
    std::string brand;
    std::string model;
    int capacity;
    public:
        Mobile()
        {
            brand="realme";
            model="master";
            capacity=4000;
        }
        Mobile(std::string b,std::string m,int c):brand(b),model(m),capacity(c)
        {

        }
        void display()
        {
            std::cout<<brand<<" "<<model<<" "<<capacity<<std::endl;
        }
};
int main()
{
    Mobile m;
    m.display();
    Mobile m1("oppo","f21",5000);
    m1.display();
    return 0;
}