#include<stdio.h>
int main()
{
    int n=2,i,flag=1;
    int count=0;
    while(count<10)
    {
    for(i=2;i<n;i++)
    {
        flag=1;
        if(n%i==0)
        {
            flag=0;break;
        }
    }
    if(flag)
    {
        printf("%d is prime\n",n);
        count++;
    }
    n++;
    }
    return 0;
}