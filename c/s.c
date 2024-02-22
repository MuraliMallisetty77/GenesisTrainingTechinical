#include<stdio.h>
void main()
{
    /*char s[5]="kpit";
    char *p;
    p=s;
    printf("%c",(*p)++);
    printf("\n%s",s);*/
    // int a=10,b=20,c=30;
    // int *p[3]={&a,&b,&c};
    // for(int i=0;i<3;i++)
    // {
    //     printf("%d ",*(*(p+i)));
    // }
    printf("%d",power(2,4));
}
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