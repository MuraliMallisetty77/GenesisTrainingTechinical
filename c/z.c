#include<stdio.h>
#include<string.h>
void main()
{
    char string[1000];
    printf("enter string:");fgets(string,1000,stdin);
    char words[1000][50];
    int count[1000];
    int wc=0;

    char *token=strtok(string," \n");
    while(token!=NULL)
    {
        int found=0;
        for(int i=0;i<wc;i++)
        {
            if(strcmp(words[i],token)==0)
            {
                count[i]++;
                found=1;
                break;
            }
        }
        if(!found)
        {
            strcpy(words[wc],token);
            count[wc]=1;
            wc++;

        }
        token=strtok(NULL," \n");
    }

    printf("occurences:\n");
    for(int i=0;i<wc;i++)
    {
        printf("%s occurs in %d times\n",words[i],count[i]);
    }  
}
