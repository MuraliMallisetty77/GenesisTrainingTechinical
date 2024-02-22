#include<stdio.h>
#include<string.h>
void main()
{
    char s[100]="ravi is a";
    //printf("Enter name:");
    fgets(s,7,stdin);
    printf("%d",strlen(s));
}