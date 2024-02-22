#include<stdio.h>
#include<string.h>
void count(char s[],int n)
{
    int i,j;
    int count=0;
    int a[n];
    for(i=0;s[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                count++;
                a[j]=-1;

            }  
        }
        if(a[i]!=-1)
        a[i]=count;

    }
    for(i=0;s[i]!='\0';i++)
    {
        if(a[i]!=-1)
        {
            printf("%c in %d times\n",s[i],a[i]);
        }
        
    }
}
void main()
{
    char s[100];
    printf("enter string:");fgets(s,100,stdin);
    int n=strlen(s);
    count(s,n);
}