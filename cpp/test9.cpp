#include<iostream>
#include<cstring>

class OverFlowException:public std::exception
{
    char msg[1000];
    public:
        OverFlowException()
        {
            strcpy(msg,"stack overflow");
        }
        OverFlowException(const char *m)
        {
            strcpy(msg,m);
        }
        char* what()
        {
            return msg;
        }
};

class UnderFlowException:public std::exception
{
    char msg[1000];
    public:
        UnderFlowException()
        {
            strcpy(msg,"stack underflow");
        }
        UnderFlowException(const char *m)
        {
            strcpy(msg,m);
        }
        char* what()
        {
            return msg;
        }
};

class Stack
{
    int top;
    int size;
    int *arr;
    public:
        Stack();
        Stack(int);
        ~Stack();
        bool isEmpty();
        bool isFull();
        void push(int);
        int pop();
        int peek();
};

Stack::Stack()
{
    top=-1;
    size=2;
    arr=new int[size];
}

Stack::Stack(int s)
{
    top=-1;
    size=s;
    arr=new int[size];

}

Stack::~Stack()
{
    //std::cout<<"~ called";
    delete []arr;
}

bool Stack::isEmpty()
{
    return top==-1;
}

bool Stack::isFull()
{
    return top==size-1;
}

void Stack::push(int ele)
{
    if(isFull())
        //throw "\nstack overflow";
        throw OverFlowException("Stack overflow");

    std::cout<<"\npush exec";
    arr[++top]=ele;
}

int Stack::pop()
{
    if(isEmpty())
        //throw "\nstack underflow";
        throw UnderFlowException();

    return arr[top--];
}

int Stack::peek()
{
    if(isEmpty())
        //throw "\nstack underflow";
        throw UnderFlowException();
    
    return arr[top];
}

int main()
{
    Stack s1;

    try
    {
        s1.push(10);
        s1.push(20);
        s1.push(30);
    }
    // catch(const char *msg)
    // {
    //     std::cout<<msg<<"\n";
    // }
    catch(OverFlowException o)
    {
        std::cout<<"\n"<<o.what()<<std::endl;
    }
    catch(std::exception e)
    {
        //std::cout<<"\nsome error\n";
        std::cout<<e.what();
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
    // catch(const char *msg)
    // {
    //     std::cout<<msg;
    // }
    catch(UnderFlowException o)
    {
        std::cout<<o.what()<<std::endl;
    }
    // catch(...)
    // {
    //     std::cout<<"some error";
    // }

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
    

    return 0;
}


