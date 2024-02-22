#include<stdio.h>
#include"header.h"
int palind(int n)
{
    int rev=0,rem;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==temp)
    return 1;
    else
    return 0;
}

void palindrome(int n)
{
    int rev=0,rem;
    int temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==temp)
    printf("palindrome");
    else
    printf("not palinndrome");

}