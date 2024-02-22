#include<iostream>
using namespace std;
#include<stack>

class integer
{
    int value;
    public:
        integer(int v=0):value(v)
        {

        }
        integer(const integer &i)
        {
            cout<<"copy"<<endl;
            value=i.value;
        }
        integer& operator++()
        {
            cout<<"operator++"<<this<<endl;
            ++value;
            return *this;
        }
        friend ostream& operator<<(ostream &out,integer &i)
        {
            cout<<i.value<<endl;
            //out<<i.value;
            return out;
        }

};
int main()
{
    
    // integer i{5};
    // cout<<"&i:"<<&i<<endl;
    // ++++i;
    // cout<<i;
    stack<integer> s;
    

    return 0;
}