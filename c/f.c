#include<stdio.h>
#include<string.h>
int plaind(char s[]);
// void main()
// {
//     char s[100];
//     int i,len,flag=1;
//     printf("enter string:");
//     gets(s);
//     len=strlen(s);
//     for(i=0;i<len;i++)
//     {
//         if(s[i]!=s[len-i-1])
//         {
//             flag=0;
//             break;
//         }
//     }
//     if(flag)
//     printf("palind");
//     else
//     printf("not");
   
// }
// void main()
// {
//     char s1[100],s2[100];
//     int i,j;
//     int len=0;
//     int f=1;
//     printf("enter string:");fgets(s1,100,stdin);
//     for(i=0;s1[i]!=0;i++)
//     {
//         len++;
//     }
//     s2[len--]='\0';
//     for(j=0;len>=0;len--,j++)
//     {
//         s2[j]=s1[len];
//     }
//     printf("%s\n",s2);
//     printf("%s\n",s1);
//     for(i=0;s1[i]!='\0';i++)
//     {
//         if(s1[i]!=s2[i])
//         {
//             f=0;
//         }
//     }
//     if(f)
//     printf("palind");
//     else
//     printf("not palind");
   
// }
void main()
{
    char s[100];
    printf("enter string:");gets(s);
    char words[100][50]={'\0'};
    int row=0;
    for(int i=0;s[i]!='\0';i++)
    {
        static int col=0;
        if(s[i]!=' ')
        {
            words[row][col]=s[i];
            col++;
        }
        else
        {
            row++;
            col=0;
        }
    }
    for(int i=0;i<=row;i++)
    {
        printf("%s \n",words[i]);
    }
    int count=0;
    for(int i=0;i<=row;i++)
    {
        if(palind(words[i]))
        count++;
    }
    printf("%d",count);
}
int palind(char s[])
{
    int i,len,f=1;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            f=0;
            break;
        }
    }
    if(f)
    return 1;
    else
    return 0;
}
    
    // char s[100];
    // printf("enter string:");gets(s);
    // char words[1000][50];
    // int count[1000];
    // int wc=0;

    // char *token=strtok(s," \n");
    // while(token!=NULL)
    // {
    //     int f=0;
    //     for(int i=0;i<wc;i++)
    //     {
    //         if(strcmp(words[i],token)==0)
    //         {
    //             count[i]++;
    //             f=1;
    //             break;
    //         }
    //     }
    //     if(!f)
    //     {
    //         strcpy(words[wc],token);
    //         count[wc]=1;
    //         wc++;
    //     }
    //     token=strtok(NULL," \n");

    // }
    // for(int i=0;i<wc;i++)
    // {
    //     printf("%s in %d times\n",words[i],count[i]);
    // }

