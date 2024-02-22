#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
/*
iterator vector:pointer+int,p-int,p-p,p++,p--
                >,<,>=,<=,==,!=
*/
class Employee
{
    int id;
    string name;
    int salary;
    public:
        Employee()=default;
        Employee(int i,string n,int s):id(i),name(n),salary(s)
        {
        }
        friend istream& operator>>(istream &is,Employee &e)
        {
            cout<<"\nEnter id:";
            is>>e.id;
            cout<<"\nEnter name:";
            is>>e.name;
            cout<<"\nEnter salary:";
            is>>e.salary;

            return is;
        }
        friend ostream& operator<<(ostream &os,const Employee &e)
        {

            os<<"\nId:"<<e.id<<" Name:"<<e.name<<" Salary:"<<e.salary;
            return os;
        }
        //for sort algorithm and max_element and min_element
            // bool operator<(Employee &e)
            // {
            //     return salary<e.salary;
            // }

        //for find algorithm
            // bool operator==(const Employee &e)//passing employee object in find algorithm
            // {
            //     return id==e.id;
            // }
            // bool operator==(int i)//passing key as id in find algorithm
            // {
            //     return id==i;
            // }
            // bool operator==(string i)//passing key as a string in find algorithm
            // {
            //     return name==i;
            // }

        int getSalary() const { return salary; }
        void setSalary(int salary_) { salary = salary_; }
};
bool compare(Employee &e1,Employee &e2)
{
    return e1.getSalary()>e2.getSalary();
}
int main()
{
    vector<Employee> v;
    for(int i=0;i<3;i++)
    {
        Employee e;
        cin>>e;
        v.push_back(e);
        // for(auto i=v.begin();i<v.end();i++)
        // {
        //     cout<<*i<<endl;
        // }
    }
    // for(auto i=v.begin();i<v.end();i++)
    // {
    //         cout<<*i<<endl;
    // }

    // minimum element
        // auto i=min_element(v.begin(),v.end());
        // cout<<*i;
    //maximum element 
        // auto i=max_element(v.begin(),v.end());//maximum//overload <
        // cout<<*i;
        

    //sort algorithm
        // sort(v.begin(),v.end());//sorting in ascending//overload <
        // for(auto i=v.begin();i<v.end();i++)
        // {
        //     cout<<*i<<endl;
        // }
        // sort(v.begin(),v.end(),compare);//sorting in descending
        // for(auto i=v.begin();i<v.end();i++)
        // {
        //     cout<<*i<<endl;
        // }

    //find algorithm
        //Employee key(1,"Murali",300);
        // Employee key;
        // cout<<"\nEnter key:";
        // cin>>key;
        // int key;
        // cout<<"\nEnter key:";
        // cin>>key;
        // string key;
        // cout<<"\nEnter key:";
        // cin>>key;
        // auto it=find(begin(v),end(v),key);
        // if(it==end(v))
        //     cout<<"\nNot found";
        // else
        //     cout<<*it;
        // return 0;

        //count algorithm
        

}



//int main()
//{
    //vector<int> v1;
        // cout<<v1.size()<<endl;
        // cout<<v1.capacity()<<endl;
        // cout<<v1.max_size()<<endl;
    //vector<int> v={1,2,3,4};
        // cout<<v.size()<<endl;
        // cout<<v.capacity()<<endl;
        // cout<<v.max_size()<<endl;
        // v.resize(3);
        // v.shrink_to_fit();
        //v.reserve(10);
        //cout<<v.capacity()<<endl;
        // v.reserve(20);
        // cout<<v.capacity()<<endl;
        // for(int i:v)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<"\n";

        // for(vector<int>::iterator i=v.begin();i<v.end();i++)
        // {
        //     cout<<*i<<" ";
        // }

    // for(auto i=v.begin();i<v.end();i++)
    // {
    //     cout<<*i<<" ";
    // }
    // v.push_back(10);
    // v.push_back(20);
    // for(int i:v)
    // {
    //      cout<<i<<" ";
    // }
    // v.reserve(20);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // v.push_back(20);
    // for(int i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    // for(vector<int>::iterator i=v.begin();i<v.end();i++)
    // {
    //     cout<<*i<<" ";
    // }
    // v.pop_back();
    // v.pop_back();
    // cout<<"\n";
    // for(auto i=v.rbegin();i<v.rend();i++)
    // {
    //     cout<<*i<<" ";
    // }


    //inserting element at first and specified position
        //vector<int>::iterator it=v.begin();
        // auto it=v.begin()+2;
        // v.insert(it,20);
        // it=v.begin();
        // for(;it<v.end();it++)
        // {
        //         cout<<*it<<" ";
        // }

    //inserting element an checking the ele greater or less and arrange in order by using upper_bound
        // vector<int> v;
        // while(1)
        // {
        //     int option;
        //     cout<<"\nEnter option:";
        //     cin>>option;
        //     if(option==1)
        //     {
        //         break;
        //     }
        //     int ele;
        //     cout<<"\nEnter element:";
        //     cin>>ele;
        //     //auto it=upper_bound(begin(v),end(v),ele);
        //     auto it=upper_bound(v.begin(),v.end(),ele);
        //     v.insert(it,ele);
        //     for(auto i=v.begin();i<v.end();i++)
        //     cout<<*i<<" ";           
        // }

    //erasing the element
        // vector<int> v={10,20,44,99};
        // for(int i:v)
        // cout<<i<<" ";
        // cout<<"\n";
        // int ele;
        // cout<<"\nEnter element to remove:";
        // cin>>ele;
        // //auto it=find(v.begin(),v.end(),ele);
        // vector<int>::iterator it=find(v.begin(),v.end(),ele);
        // if(it==v.end())
        //     cout<<"\nEle not found";
        // else
        //     v.erase(it); 

        // for(int i:v)
        // cout<<i<<" "; 

    


//     return 0;
// }