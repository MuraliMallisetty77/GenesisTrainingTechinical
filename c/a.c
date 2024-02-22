#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");scanf("%d",&n);
    int i=1;
    while(i)
    {
        if(i!=n)
        {
            int sum=0;
            int p=i;
            while(p!=0)
            {
                sum=sum+p%10;
                p/=10;
            }
            if(sum==n)
            {
                printf("%d",i);
                break;
            }
        }
        i++;

    }
    return -1;
}