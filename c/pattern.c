#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=4;c++)
        {
            if(c%2!=0)
            printf("* ");
            else
            printf("# ");
        }
        printf("\n");
    }
}