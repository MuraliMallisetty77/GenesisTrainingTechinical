#include<stdio.h>
#include<stdlib.h>
struct bank{
    int id;
    char name[20];
    float sal;
};
void accept(struct bank*);
void display(struct bank);

void main()
{
    struct bank *b;
    b=(struct bank*)malloc(2*sizeof(struct bank));
    for(int i=0;i<2;i++)
    {
        accept(&b);
    }
}