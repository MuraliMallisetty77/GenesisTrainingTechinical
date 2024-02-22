#include<stdio.h>
int main()
{
    int n,i,j;
    int count=0;
    int count1=0;
    printf("enter nunm:");scanf("%d",&n);
    int temp=n+1;
    while(count1<1)
    {
        count=0;
        for(i=1;i<=temp;i++)
        {
            if(temp%i==0)
            count++;
        }
        if(count==2)
        {
            printf("%d is prime",temp);
            count1++;
        }
        temp++;
    }
    return 0;

}