#include<stdio.h>
void main()
{
    char name[10];char *p;
    printf("enter name:");gets(name);
    p=name;
    for(int i=0;name[i]!='\0';i++)
    {
        printf("%c",*(p+i));
    }
}