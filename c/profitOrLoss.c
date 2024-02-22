#include<stdio.h>
int main()
{
    int cp,sp;
    printf("enter cost price:");
    scanf("%d",&cp);
    printf("\nenter selling price:");
    scanf("%d",&sp);
    if(cp>sp)
    printf("loss\nloss amount:%d",(cp-sp));
    else
    {
        printf("profit\nprofit amount:%d",(sp-cp));
    }
    return 0;
}
