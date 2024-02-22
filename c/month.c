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
    switch(month)
    {
        case 1:
        if(day>=1 && day<=31) 
        printf("%d Jan %d is valid",day,year);
        else
        printf("%d Jan %d is not valid",day,year);
        break;

        case 2:
        if(year%4==0 && year%100!=0 || year%4==0)
        {
            if(day>=1 && day<=29) 
             printf("%d feb %d is valid",day,year);
            else
              printf("%d feb %d is not valid",day,year);    
        }
        else 
        {
            if(day>=1 && day<=28)
             printf("%d feb %d is valid",day,year);
            else
              printf("%d feb %d is not valid",day,year);
        }
        break;

        case 3:
        if(day>=1 && day<=31) 
        printf("%d mar %d is valid",day,year);
        else
        printf("%d mar %d is not valid",day,year);
        break;

        case 4:
        if(day>=1 && day<=30) 
        printf("%d apr %d is valid",day,year);
        else
        printf("%d apr  %d is not valid",day,year);
        break;
        
        case 5:
        if(day>=1 && day<=31) 
        printf("%d may %d is valid",day,year);
        else
        printf("%d may %d is not valid",day,year);
        break;

        case 6:
        if(day>=1 && day<=30) 
        printf("%d jun %d is valid",day,year);
        else
        printf("%d jun %d is not valid",day,year);
        break;

        case 7:
        if(day>=1 && day<=31) 
        printf("%d july %d is valid",day,year);
        else
        printf("%d july %d is not valid",day,year);
        break;

        case 8:
        if(day>=1 && day<=31) 
        printf("%d aug %d is valid",day,year);
        else
        printf("%d aug %d is not valid",day,year);
        break;

        case 9:
        if(day>=1 && day<=30) 
        printf("%d sep %d is valid",day,year);
        else
        printf("%d sep %d is not valid",day,year);
        break;

        case 10:
        if(day>=1 && day<=31) 
        printf("%d oct %d is valid",day,year);
        else
        printf("%d oct %d is not valid",day,year);
        break;

        case 11:
        if(day>=1 && day<=30) 
        printf("%d nov %d is valid",day,year);
        else
        printf("%d nov  %d is not valid",day,year);
        break;

        case 12:
        if(day>=1 && day<=31) 
        printf("%d dec %d is valid",day,year);
        else
        printf("%d dec %d is not valid",day,year);
        break;

        default:
        printf("invalid month");
    }
}