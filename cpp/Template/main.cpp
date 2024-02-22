#include<iostream>
#include"head.h"

int main()
{
    Stack<int> s1;

    try
    {
        s1.push(10);
        s1.push(20);
        s1.push(30);
    }
    catch(const char *msg)
    {
        std::cout<<msg<<"\n";
    }

    try
    {
        std::cout<<s1.pop()<<"\n";
        std::cout<<s1.pop()<<"\n";
        std::cout<<s1.pop()<<"\n";
    }
    // catch(int msg)
    // {
    //     std::cout<<msg;
    // }
    catch(const char *msg)
    {
        std::cout<<msg;
    }
    catch(...)
    {
        std::cout<<"some error";
    }

    //std::cout<<s1.arr[0];

    // try
    // {
    //     std::cout<<s1.peek()<<"\n";
    //     std::cout<<s1.peek()<<"\n";
    //     std::cout<<s1.peek()<<"\n";
    // }
    // catch(const char *msg)
    // {
    //     std::cout<<msg;
    // }
    

    Stack<Employee> s2;
    Employee e1("Murali",40000),e2("Ravi",75889),e3("varma",86578);
    s2.push(e1);
    s2.push(e2);
    Employee e=s2.pop();
    e.display();
    e=s2.pop();
    e.display();
    //std::cout<<s2.pop();

    return 0;
}