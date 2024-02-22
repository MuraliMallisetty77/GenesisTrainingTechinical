#include<iostream>
#include<cstring>
#include"header.h"
void displayMenu()
{
    std::cout<<"\t\tMENU"<<std::endl;
    std::cout<<"-------------------------------------------"<<std::endl;
    std::cout<<"\n1.accepting details"<<std::endl;
    std::cout<<"2.displaying details"<<std::endl;
    std::cout<<"3.modifying details"<<std::endl;
    std::cout<<"4.searching details"<<std::endl;
    std::cout<<"5.exit"<<std::endl;
    std::cout<<"-------------------------------------------"<<std::endl;

}

void displaying(Student1 s[], int n)
{
    if(n==0)
    std::cout<<"nothing to display"<<std::endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            s[i].display();
        }

    }

}

void modify(Student1 s[],int n)
{
    std::cout<<"enter name to modify:";
    char na[30];
    std::cin>>na;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(s[i].getName(),na)==0)
        {
            flag=1;
            std::cout<<"enter marks to modify:";
            int mark;
            std::cin>>mark;
            s[i].setMarks(mark);
        }
    }
    if(!flag)
    {
        std::cout<<"student not found to modify";
    }
}
void search(Student1 s[],int n)
{
    std::cout<<"enter name to search:";
    char na[30];
    std::cin>>na;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(s[i].getName(),na)==0)
        {
            flag=1;
            s[i].display();
        }
    }
    if(!flag)
    {
        std::cout<<"student not found";
    }
}
int main()
{
    int n;
    std::cout<<"\nenter n:";
    std::cin>>n;
    Student1 *s=new Student1[n];
    int cout=0;
    int temp=1;
    while(1)
    {
        displayMenu();
        int option;
        std::cout<<"\nenter option:";
        std::cin>>option;
        switch(option)
        {
            case 1:
            if(temp<=n)
            {
                s[cout].accept();
                cout++;
                temp++;   
            }
            else
            {
                std::cout<<"memory is full to accept students"<<std::endl;

            }
            break;
            case 2:
                displaying(s,cout);
                break;
            case 3:
                modify(s,cout);
                break;
            case 4:
                search(s,cout);
                break;
            case 5:
                return 0;
                break;

        }
    }

    return 0;
}