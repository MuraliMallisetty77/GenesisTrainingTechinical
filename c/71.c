#include<stdio.h>
#include<math.h>
int power(int b,int p)
{
    int power=1;
    for(int i=1;i<=p;i++)
    power*=b;
    return power;
}
int* clcpow(int b,int p,int *x)
{
    int a=1;
    int *flag=&a;
    int pwr=1;
    for(int i=1;i<=p;i++)
    {
        if(pwr>=0)
        {
            pwr*=b;
        }
        else
        {
            *flag=0;
            return flag;
        }
    }
    *x=pwr;
    return x;
    //*x=power(b,p);
    //return x;

}
void main()
{
    int b,p;
    printf("enter base:");scanf("%d",&b);
    printf("enter power:");scanf("%d",&p);
    int *res;
    if(*(clcpow(b,p,res)))
    {
        printf("the value in range\n");
        printf("%d",*res);
    }
    else
    printf("the value is not in range");
}