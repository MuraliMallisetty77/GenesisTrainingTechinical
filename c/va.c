#include<stdio.h>
#include<string.h>

int dele(char *string,char *sub);
void delete(char string[],char sub[]);
void main()
{
    char s[100],s1[100];
    printf("enter string:");fgets(s,100,stdin);
    // printf("enter substring:");scanf("%s ",s1);
    printf("before:%s",s);
    delete(s,"the ");
    printf("\nafter:%s",s);
   

}
void delete(char string[],char sub[]) 
{
    int slen=strlen(string);
    int sublen=strlen(sub);
    int i=0;
    while(i<slen)
    {
        if(strstr(&string[i],sub)==&string[i])
        {
            slen-=sublen;
            for(int j=i;j<slen;j++)
            {
                string[j]=string[j+sublen];
            }
        }
        else
        i++;
    }
    string[i]='\0';
}


int dele(char *string,char *sub)
{
    int i,j;
    int flag=1;
    int string_len=strlen(string);
    int sub_len=strlen(sub);
    int end_len=string_len-sub_len+1;
    for(i=0;i<end_len;i++)
    {
        for(j=0;j<sub_len;j++)
        {
            if(sub[j]!=string[i+j])
            {
                flag=0;
                break;
            }
        }
    }
    return flag;
}




