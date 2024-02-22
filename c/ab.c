#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main()
{
    char **p;
    int n;
    char t[50];
    printf("enter size:");scanf("%d",&n);
    p=(char**)malloc(n*sizeof(char*));
    char temp[50];
    for(int i=0;i<n;i++)
    {
        printf("enter name:");
        getchar();
        scanf("%[^\n]s",temp);
        p[i]=(char*)malloc((strlen(temp)+1)*sizeof(char));
        strcpy(p[i],temp);
    }
    printf("before:\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",p[i]);
    }
    for(int i=0;i<=n-2;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {

            if(strcmp(p[i],p[j])>0)
            {
                strcpy(t,p[i]);
                strcpy(p[i],p[j]);
                strcpy(p[j],t);
            }
        }
    }
    printf("after:\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",p[i]);
    }

}