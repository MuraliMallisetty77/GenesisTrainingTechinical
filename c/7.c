#include<stdio.h>
void calcula(int *e,int *o)
{
    int n=1;
    int i=1;
    for(i=1;i<=20;i++)
    {
        if(i%2==0)
        *e+=i;
        else
        *o+=i;
    }
    
}
void main()
{
    int sum1=0,sum2=0;
    calcula(&sum1,&sum2);
    printf("%d %d",sum1,sum2);

}


