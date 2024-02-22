#include<iostream>
#include<cstring>

class Vehicle
{
    protected:
        char brand[20];
        char model[20];
        int year;
    public:
        Vehicle(const char *b,const char *m,int y):year(y)
        {
            strcpy(brand,b);
            strcpy(model,m);
        }
        virtual void drive()
        {
            std::cout<<"\nvehicle is moving";

        }
        virtual void display()
        {
            std::cout<<"\nBrand:"<<brand<<" model:"<<model<<" Year:"<<year<<std::endl;
        }

        int getYear() const { return year; }
        void setYear(int year_) { year = year_; }

};
class TwoWheeler:public Vehicle
{
    public:
        TwoWheeler(const char *b,const char *m,int y):Vehicle(b,m,y)
        {

        }

        void drive()
        {
            std::cout<<"\nTwo wheeler is moving";
        }
        void display()
        {
            std::cout<<"\nBrand:"<<brand<<" model:"<<model<<" Year:"<<year<<std::endl;
        }

};
class FourWheeler:public Vehicle
{
    public:
        FourWheeler(const char *b,const char *m,int y):Vehicle(b,m,y)
        {

        }
        void drive()
        {
            std::cout<<"\nFour wheeler is moving";
        }
        void Ac()
        {
            std::cout<<"\nAc is working";
        }
        void display()
        {
            std::cout<<"\nBrand:"<<brand<<" model:"<<model<<" Year:"<<year<<std::endl;
        }

};

int main()
{
    Vehicle *v=new TwoWheeler("Yamaha","R15",2020);
    v->drive();
    v->display();

    Vehicle *v1=new FourWheeler("Maruti suzuki","Baleno",2023);
    FourWheeler *f=dynamic_cast<FourWheeler*>(v1);
    v1->drive();
    f->Ac();
    v1->display();
    

    return 0;
}