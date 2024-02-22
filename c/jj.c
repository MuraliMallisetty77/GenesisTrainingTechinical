#include<stdio.h>
void fun(int *b)
{
    scanf("%d",b);
}
void main()
{
   int a;
   fun(&a);
   printf("%d",a);
}
