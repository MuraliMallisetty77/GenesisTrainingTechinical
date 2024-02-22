#include<iostream>
template<class T>
void sort(T arr[],int n)
{
    T temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[4]={1,5,8,2};
    sort(arr,4);
    // int n;
    // std::cout<<"Enter n:";
    // std::cin>>n;
    // int *arr=new int[n];
    // std::cout<<"Enter "<<n<<" elements:";
    // for(int i=0;i<n;i++)
    // {
    //     std::cin>>arr[i];
    // }
    // sort(arr,n);
    std::cout<<"\n";
    double d[3]={10.3,7.8,13.5};
    sort(d,3);
    return 0;
}