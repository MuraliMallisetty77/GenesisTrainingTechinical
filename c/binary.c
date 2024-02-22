#include<stdio.h>
#include<math.h>
int power(int b,int p)
{
    int sum=1;
    while(p!=0)
    {
        sum=sum*b;
        p--;
    }
    return sum;
}
void main()
{
    long n;
    printf("enter binary:");scanf("%ld",&n);
    int sum=0,i=0,rem;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*power(2,i);
        i++;
        n/=10;
    }
    printf("%d",sum);
}