#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Employee
{
    int id;
    public:
        Employee()
        {
            cout<<"defa called"<<endl;
        }
        Employee(int i):id(i){cout<<"para called:"<<i<<endl;};
        Employee(const Employee &e)
        {
            id=e.id;
            cout<<"copy called:"<<id<<endl;
        }
        Employee(const Employee &&e)
        {
            id=e.id;
            cout<<"move called:"<<id<<endl;
        }
        ~Employee()
        {
            cout<<"~ called"<<endl;
        }
        Employee& operator=( const Employee &e)
        {
            id=e.id;
            cout<<"= called:"<<id<<endl;
            return *this;
        }
        friend ostream& operator<<(ostream &os,const Employee &e)
        {

            os<<"\nId:"<<e.id;

            return os;
        }
        void display()
        {
            cout<<id<<" ";
        }
};
int main()
{
    vector<Employee> v;
   // Employee e(20);
    // v.push_back(Employee(10));
    // v.push_back(e);
    // v.push_back(Employee(30));
    // auto it=v.begin();
    // cout<<*it<<endl;
    //v.push_back(Employee(40));
    //v.insert(it,Employee(40));
   // cout<<*it<<endl;
    //v.push_back(Employee(50));
    // it=v.begin();
    // cout<<*it<<endl;
    // for(auto i=v.begin();i!=v.end();i++)
    // {
    //     cout<<*i<<" ";
    // }
    // for(Employee e:v)
    // {
    //     e.display();
    // }
    //v.insert(it,Employee(50));

    //v.emplace_back((10));
    

    // list<Employee> v;
    // v.push_back(Employee(10));
    // v.push_back(Employee(20));
    // v.push_back(Employee(30));
    // auto it=v.begin();
    // v.insert(it,Employee(40));
    // it=v.begin();
    // v.insert(it,Employee(50));
    // for(auto i=v.begin();i!=v.end();i++)
    // {
    //     cout<<*i<<" ";
    // }
    
    return 0;

}



// #include<iostream>
// using namespace std;
// int main()
// {
//     const int a=10;
//     const int &b=a;
//     const int &c=10;
//     int &&d=10;
//     return 0;
// }