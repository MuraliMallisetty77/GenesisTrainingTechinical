#include<iostream>
#include<cstring>
 
template<class T>
void display(T *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"\t";
    }
}
 
template<class T>
class Sorting
{
    T *arr;
    public:
        Sorting()
        {
            arr=new T[20];
            arr={10,20};
        }
        Sorting(T *a)
        {
            arr=new T[20];
            arr=a;
        }
 
        void sort(int size)
        {
            for(int i=0;i<size-1;i++)
            {
                for(int j=0;j<size-i-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        T temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
        }
};
 
int main()
{
    float arr[5]={5.1,4.9,6.5,2.7,1.8};
    Sorting<float> s1(arr);
    s1.sort(5);
    display(arr,5);
}