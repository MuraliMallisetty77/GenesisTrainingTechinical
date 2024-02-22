#include<stdio.h>
int  main()
{
    int a=100;
    int *p=&a;
    printf("%u\n",&a);
    printf("%u\n",p);
    printf("%u\n",&p);
   *p=200;
    printf("%d",a);
}
