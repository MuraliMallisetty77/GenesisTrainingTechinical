#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *replace(char *before,char *old,char *new);
void main()
{
    char s[100];
    printf("enter string:");gets(s);
    char *res=replace(s,"the","that");
    printf("%s",res);

}
char *replace(char *before,char *old,char *new)
{
    int blen=strlen(before);
    int oldlen=strlen(old);
    int newlen=strlen(new);
    char *after;
    if(oldlen==newlen)
    {
        after=malloc((blen+1)*sizeof(char));
    }
    else
    {
        int occ=0;
        int i=0;
        while(i<blen)
        {
            if(strstr(&before[i],old)==&before[i])
            {
                occ++;
                i+=oldlen;
            }
            else
            i++;
        }
        int diff=newlen-oldlen;
        int afterlen=blen;
        afterlen+=occ*diff;
        after=malloc((afterlen+1)*sizeof(char));
    }

    int i=0,j=0;
    while(i<blen)
    {
        if(strstr(&before[i],old)==&before[i])
        {
            strcpy(&after[j],new);
            i+=oldlen;
            j+=newlen;
        }
        else
        {
            after[j]=before[i];
            i++;
            j++;  
        }
    }
    return after;

}


