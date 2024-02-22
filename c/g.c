#include<stdio.h>
#define SIZE 4
void func(int []);
void occ(int [],int);
void max(int []);
void sort(int []);
void main()
{
   int a[SIZE]={4,2,8,4};
   //max(a);
    sort(a);
   // occ(a,7);
}
void sort(int *c)
{
    int temp;
    for(int i=0;i<SIZE;i++)
    {
        for(int j=i+1;j<SIZE;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
            
        }
    }
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",c[i]);
    }
}
void max(int *c)
{
    int max,min;
    max=min=c[0];
    for(int i=1;i<SIZE;i++)
    {
        if(max<c[i])
        max=c[i];
        if(min>c[i])
        min=c[i];
    }
    printf("max=%d\n",max);
    printf("min=%d",min);
}
void occ(int *c,int n)
{
    int count;
    int a[SIZE]={0};
    for(int i=0;i<SIZE;i++)
    {

        for(int j=i+1;j<SIZE;j++)
        {
            count=1;
            if( c[i]==c[j])
            {
                count++;
                a[j]=-1;
            }
            if(a[i]!=-1)
            a[i]=count;
        }
       
    }
    for(int i=0;i<SIZE;i++)
    {
        if(a[i]!=-1)
        printf("%d count is %d\n",c[i],a[i]);
    }

}
void func(int *c)
{
    for(int i=SIZE-1;i>=0;i--)
    {
        printf("%d ",*(c+i));
    }
}