#include<stdio.h>
void square(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
    }

}
int sort(int a[],int n)
{
    int max,min;
    max=min=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    printf("max=%d,mi=%d",max,min);
    int diff=max-min;
    return diff;
}
int nextprime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    return n;
    else
    nextprime(++n);
}
int beforeprime(int n)
{
     int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    return n;
    else
    beforeprime(--n);
}
void main()
{
    int a[100];
    int n,i;
    printf("enter size:");scanf("%d",&n);
    printf("enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    square(a,n);
    int diff=sort(a,n);
    printf("\ndiff=%d\n",diff);
    // printf("\n%d",prime(diff));
    // for(i=0;i<n;i++)
    // {
    //     printf("%d ",a[i]);
    // }
    int n1=nextprime(diff);
    int n2=beforeprime(diff);
    //printf("%d\n",n1);
    //printf("%d",n2);
    int diff1=n1-diff;
    int diff2=diff-n2;
    printf("before:%d\n",n2);
    if(diff1<diff2)
    printf("%d\n",n1);
    else if(diff1==diff2)
    printf("%d %d \n",n1,n2);
    else
    printf("%d\n",n2);
}