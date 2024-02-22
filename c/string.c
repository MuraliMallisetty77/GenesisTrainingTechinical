#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],s[100]="murali";
    printf("enter string:"); gets(a);
    printf("%d\n",strlen(a));
    printf("%u",strstr(s,"ur"));
    printf("%s",a);
    return 0;
}