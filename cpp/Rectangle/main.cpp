#include<iostream>
#include"header.h"
int maxarea(Rectangle r[],int n)
{
    int area[n];
    for(int i=0;i<n;i++)
    {
        area[i]=r[i].calArea(r[i].getLength(),r[i].getBreadth());
        std::cout<<"Area:"<<area[i]<<"\t";
    }
    int max=area[0];
    for(int i=1;i<n;i++)
    {
        if(max<area[i])
        max=area[i];
    }
    return max;

}
int main()
{
    // Rectangle r(5,6);
    // r.dispaly();
    // std::cout<<r.calArea(5,6)<<std::endl;
    // std::cout<<r.calPeri(5,6);
    // int n;
    // std::cout<<"enter n:";
    // std::cin>>n;

    // Rectangle *r=new Rectangle[n];
    // for(int i=0;i<n;i++)
    // {
    //     r[i].accept();
    //     r[i].display();
    // }
    // int max=maxarea(r,n);
    // std::cout<<"\nMax:"<<max<<std::endl;
    // delete []r;
    Rectangle r[3]={{4,5},{5,6},{7,8}};
    int max=maxarea(r,3);



    return 0;
}
