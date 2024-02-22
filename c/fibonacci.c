#include<stdio.h>
int main()
{
    int n,f1=0,f2=1,f3,i;//i=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) //while(i<=n)
    {
        printf("%d ",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
        //i++;
    }

}