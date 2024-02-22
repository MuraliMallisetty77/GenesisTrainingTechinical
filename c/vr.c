#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// void main()
// {
//     char **p=NULL;
//     int n;
//     printf("enter nof names:");scanf("%d",&n);
//     p=(char**)malloc(n*sizeof(char*));
//     char temp[50];
//     for(int i=0;i<n;i++)
//     {
//         getchar();
//         printf("enter string:");
//         scanf("%[^\n]s",temp);
//         p[i]=(char*)malloc((strlen(temp)+1)*sizeof(char));
//         strcpy(p[i],temp);
//     }

//     for(int i=0;i<n;i++)
//     {
//         printf("%s\n",p[i]);
//     }
// }
void sort(char **p,int n)
{
    int i,j;
    char *temp;
    for(i=0;i<=n-2;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(strcmp(p[i],p[j])>0)
            {
                strcpy(temp,p[i]);
                strcpy(p[i],p[j]);
                strcpy(p[j],temp);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",p[i]);
    }
}

void main()
{
    char **p=NULL;
    int n;
    printf("enter no of names:");scanf("%d",&n);
    p=(char**)malloc(n*sizeof(char*));
    char temp[50];
    for(int i=0;i<n;i++)
    {
        getchar();
        printf("enter name:");
        scanf("%[^\n]s",temp);
        p[i]=(char*)malloc((strlen(temp)+1)*sizeof(char));
        strcpy(p[i],temp);
    }
    // for(int i=0;i<n;i++)
    // {
    //     printf("%s\n",p[i]);
    // }
    sort(p,n);
}