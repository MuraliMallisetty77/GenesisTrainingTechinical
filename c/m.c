#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *resul(char *before,char *old,char *new);
void main()
{
    /*char s[100]="Venkata",s1[100]="Murali";
    int i,j;
    int len=0;
    for(i=0;s[i]!='\0';i++)
    {
    }
    s[i++]=' ';
    for(j=0;s1[j]!='\0';j++,i++)
    {
        s[i]=s1[j];
    }
    printf("%s",s);*/

    //for(i=len;i>=0;i--)
    //{
        //printf("%c",s[i]);
    //}
    //printf("%d",i);

    //char s[10]="hyderabad";
    //char *p="pune";
   /*int pos,len,c=0;
    printf("enter position:");scanf("%d",&pos);
    printf("enter len:");scanf("%d",&len);
    while(c<len)
    {
        printf("%c",s[pos]);
        pos++;
        c++;
    }*/
    char s[100]="the cat chased the mouse";
    // printf("Enter string:");
    //fgets(s,100,stdin);
    char *result=resul(s,"the","that");
    printf("before:%s",s);
    printf("\nafter:%s",result);
}
char *resul(char *before,char *old,char *new)
{
    int old_len=strlen(old);
    int new_len=strlen(new);
    int before_len=strlen(before);
    char *after;
    if(old_len==new_len)
    {
        after=(char*)malloc((before_len+1)*sizeof(char));
    }
    else
    {
        int count=0;
        int i=0;
        while(i<before_len)
        {
            if(strstr(&before[i],old)==&before[i])
            {
                count++;
                i+=old_len;
            }
            else
            i++;
        }
        int sub_diff=new_len-old_len;
        int after_len=before_len;
        after_len+=count*sub_diff;
        after=(char*)malloc((after_len+1)*sizeof(char));
    }
    int i=0,j=0;
    while(i<strlen(before))
    {
        if(strstr(&before[i],old)==&before[i])
        {
            strcpy(&after[j],new);
            i+=old_len;
            j+=new_len;
        }
        else
        {
            after[j]=before[i];
            i++;
            j++;
        }
    }
    after[j]='\0';
    return after;
}
