#include<stdio.h>
int main()
{
    int lower,upper,i;
    printf("enter lower limit:");scanf("%d",&lower);
    printf("enter upper limit:");scanf("%d",&upper);

    /*while(lower<=upper)
    {
        printf("%d\n",lower*lower);
        lower++;
        
    }*/
    for(i=lower;i<=upper;i++)
    {
        printf("%d\n",i*i);
    }
    
    
    
    return 0;

}