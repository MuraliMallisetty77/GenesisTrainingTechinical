#include<stdio.h>
union abc{
    int a;
    float b;
    char c;
    double d;

};
void main()
{
    union abc var;
    union abc *p;

    var.a=66;
    p=&var;
    //printf("%d\n%f\n%c",var.a,var.b,var.c);
    //printf("%ld",sizeof(union abc));
    printf("%f",p->b);
}