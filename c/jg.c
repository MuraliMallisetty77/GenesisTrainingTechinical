#include<stdio.h>
void main()
{
    int n;
    printf("enter num:");
    scanf("%d",&n);
    int rem,res=0;
    int i=1;
    while(n!=0)
    {
        rem=n%2;
        res=res+rem*i;
        n/=2;
        i*=10;
    }
    printf("%d",res);
}