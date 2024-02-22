#include<iostream>
#include<cstring>
using namespace std;
void fun(int &x)//pass by reference
{
    x=200;
}

int main()
{
    //cout<<"hello \"world\"" << endl;
    //cout<<"I am a fresher";
    // int n=5;
    // double d=3.5;
    // string s="helo";
    // bool b=true;
    // int x,y,z;
    // //int x=y=z=5;
    // x=y=z=10;
    // cout<<"my numberi:"<<x<<"\n";
    // cout<<"double value:"<<d <<"\n";
    // cout<<"String value:"<<s <<"\n";
    // cout<<"bool value:"<<b <<"\n";
    //int n;
    // cout<<"enter num: ";
    // cin>> n;
    // cout<<"number:"<< n;
    // char s[10]="kpit";
    // int n=strlen(s);
    // cout<<n;
   // int *a=new int[n];//DMA
    //char *c=new char[20];//delete operator delete *c to delete memory//use delete to avoid memory lekage
    //if new operator fails the we can use exception handling but if it is malloc we cant use that
    //delete []c;//used to free all size
    //delete [] a;//used to free memory


    //REFERENCE//pass by reference//references refer to block of memory
    //references can't be refered to constant value.//for references we need lvalue.
    // int b=10;
    // int &x=b;//x is reference variable to b//r is a nick name /alice for b
    // int y=20;
    // fun(y);
    // cout<<y;
//int &p[3];//array of references is not posiible.


// int a=10,b=20;
// int &r1=a;
// int &r1=b;//it becomes redeclaration it id not recommended.
//pointers can change addresss but references cant change the reference.
//pointers are flexible but references are rigid.
//In cpp we can write 2 functions with same name it is not issue but while calling it gets ambiguity.
    return 0;   
}