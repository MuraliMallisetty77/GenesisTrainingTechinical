#include<stdio.h>
int main()
{
   int month,day,year;
    printf("enter day:");
    scanf("%d",&day);
    printf("Enter month:");
    scanf("%d",&month);
    printf("enter year:");
    scanf("%d",&year);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        if(day>=1 && day<=31)
        {
            printf("valid date");
        }
        else
        printf("invalid date");
    }
    
    else if(month==4||month==6||month==9||month==11)
    {
        if(day>=1 && day<=30)
        {
            printf("valid date");
        }
        else
        printf("invalid date");
    }
    else
    {
        if(year%4==0 && year%100!=0 || year%400==0)
        {
            if(day>=1 && day<=29)
            printf("valid date");
            else
            printf("invalid date");
        }

        else if(month==2)
        {
            if(day>=1 && day<=28)
            printf("valid date");
            else
            printf("ivalid date");
        }
        else
        printf("invalid date");
    }
}
