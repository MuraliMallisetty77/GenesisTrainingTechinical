#include<stdio.h>
#include"header.h"
void checkpositive_negative(int num)
{
    if(num>0)
    {
        //checkprime(num);
        if(check(num))
        printf("prime\n");
        else
        printf("not prime");
    }
    else
    {
        do
        {
            printf("reenter number:");
            scanf("%d",&num);

        } while (num<0);
        checkpositive_negative(num);
        
        //printf("reenter number:");
        //scanf("%d",&num);
        //checkpositive_negative(num);
    }
}
 void checkprime(int n)
 {
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("prime\n");
    else
    printf("not prime\n");
 }
 
 int check(int n)
 {
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    return 1;
    else
    return 0;

 }