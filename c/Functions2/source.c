#include"stdio.h"
#include"header.h"
int strong(int n)
{
    int temp=n;
    int rem,fact;
    int sum=0;
    while(n!=0)
    {
        rem=n%10;
        fact=1;
        while(rem!=0)
        {
            fact=fact*rem;
            rem--;
        }
        sum+=fact;
        n/=10;
    }
    if(temp==sum)
    return 1;
    else
    return 0;
}
void strongnum(int n)
{
    int temp=n;
    int rem,fact;
    int sum=0;
    while(n!=0)
    {
        rem=n%10;
        fact=1;
        while(rem!=0)
        {
            fact=fact*rem;
            rem--;
        }
        sum+=fact;
        n/=10;
    }
    if(temp==sum)
    printf("Strong");
    else
    printf("Not strong");
}