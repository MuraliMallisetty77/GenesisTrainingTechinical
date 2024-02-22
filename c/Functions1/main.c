#include<stdio.h>
#include"header.h"
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    /*if(palind(num))
    printf("palindrome");
    else
    printf("not palindrome");*/
    palindrome(num);
    return 0;
}