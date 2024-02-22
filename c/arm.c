#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int count=0,rem;
    int temp=n,sum=0,temp2=n;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    while(temp!=0)
    {
        rem=n%10;
        sum+=pow(rem,count);
        temp/=10;
    }
    if(temp2==sum)
    printf("Arm");
    else
    printf("not arm");
}