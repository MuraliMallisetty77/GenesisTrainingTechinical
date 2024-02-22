#include<stdio.h>
#include<stdlib.h>
void accept(int[],int);
void display(int[],int);
int main()
{
    int *p,n;
    printf("enter size:");scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    accept(p,n);
    display(p,n);
    int n1;
    printf("\nenter new size to add:");scanf("%d",&n1);
    p=(int*)realloc(p,(n+n1)*sizeof(int));
    printf("enter %d new elements:",n1);
    for(int i=n;i<n+n1;i++)
    {
        scanf("%d",&p[i]);
    }
    display(p,n+n1);
    free(p);
    return 0;
}
void accept(int b[],int n)
{
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",(b+i));
    }

}
void display(int b[],int n)
{
    printf("elements:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(b+i));
    }
}