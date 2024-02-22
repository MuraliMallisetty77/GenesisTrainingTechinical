#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("lower character\nconverting to upper character:%c",ch-32);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("upper character \nconverting to lower character:%c",ch+32);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("digit\nAscii value:%d",ch);

    }
    else if(ch==' ')
    printf("space"); 
    else
    printf("special character");
    return 0;

}