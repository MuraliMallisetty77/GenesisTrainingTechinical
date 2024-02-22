#include<stdio.h>
int main()
{
    //int count=0,count2,i=1,j=1;
   /*while(count<10)
    {
        j=1;
        count2=0;
        while(j<=i)
        {
            if(i%j==0)
            count2++;
            j++;
        }
        if(count2==2)
        {
            printf("%d is prime\n",i);
            count++;
        }
        i++;  
    }*/
    int n=2,count=0,i;
    int flag=1;
    while(count<10)
    {
        for(i=2;i<=n;i++)
        {
            flag=1;
            if(n%i==0)
            {
                flag=0;
                break;
            } 
            n++;  
        }
        if(flag)
        {
            printf("%d is prime",n);
            count++;
        }
    }
    return 0;
}