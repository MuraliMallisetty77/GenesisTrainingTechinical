#include<iostream>
#include<cstring>
//template-is general purpose programming tool/algorithm
//same algorithmcan be used for different data types
//templates are more type safe at compile time
//templates bring reusability of code

// class OverFlowException:public std::exception
// {
//     char msg[1000];
//     public:
//         OverFlowException()
//         {
//             strcpy(msg,"stack overflow");
//         }
//         OverFlowException(const char *m)
//         {
//             strcpy(msg,m);
//         }
//         char* what()
//         {
//             return msg;
//         }
// };


class Employee
{
    std::string name;
    int salary;
    public:
        Employee(){};
        Employee(std::string n,int s):name(n),salary(s)
        {

        }
        void display()
        {
            std::cout<<"\nName:"<<name<<" salary:"<<salary<<std::endl;
        }
        friend std::ostream& operator<<(std::ostream &os,Employee &e)
        {
            os<<"\n"<<e.name<<" "<<e.salary<<std::endl;
            return os;
        }
};


template<class T>
class Stack
{
    int top;
    int size;
    T *arr;
    public:
        Stack();
        Stack(T);
        bool isEmpty();
        bool isFull();
        void push(T);
        T pop();
        T peek();
};

template<class T>
Stack<T>::Stack()
{
    top=-1;
    size=2;
    arr=new T[size];
}

template<class T>
Stack<T>::Stack(T s)
{
    top=-1;
    size=s;
    arr=new T[size];

}

template<class T>
bool Stack<T>::isEmpty()
{
    return top==-1;
}

template<class T>
bool Stack<T>::isFull()
{
    return top==size-1;
}

template<class T>
void Stack<T>::push(T ele)
{
    if(isFull())
        throw "\nstack overflow";

    std::cout<<"\npush exec";
    arr[++top]=ele;
}

template<class T>
T Stack<T>::pop()
{
    if(isEmpty())
        throw "\nstack underflow";

    return arr[top--];
}

template<class T>
T Stack<T>::peek()
{
    if(isEmpty())
        throw "\nstack underflow";
        
    return arr[top];
}

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


