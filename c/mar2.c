#include<stdio.h>
int dec(int n)
{
    int rem,res=0;
    int i=1;
    while(n!=0)
    {
        rem=n%2;
        res=res+rem*i;
        i*=10;
        n/=2;
    }
    return res;
}
void print(long n)
{
    int rem;
    while(n!=0)
    {
        rem=n%10;
        if(rem==1)
        printf("* ");
        n/=10;
    }
}
void main()
{
    int n;
    printf("enter num:");scanf("%d",&n);
    //printf("%d",dec(n));
    long bin=dec(n);
    printf("%ld\n",bin);
    print(bin);

}