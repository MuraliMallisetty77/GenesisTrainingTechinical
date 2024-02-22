#include<stdio.h>
#include<string.h>
void main()
{
    // char name[10]="hyderabad";
    // printf("%s",name);
    // name[0]='b';
    // printf("%s",name);
//     char *name="hello";
//     // name[0]='b';
//     name++;
// printf("%s",name);
    char name[10]="hello";
    char *p;
    p=name;
    p++;
    printf("%s\n",p);
    name[0]='k';
    printf("%s",name);
    
    

    
}