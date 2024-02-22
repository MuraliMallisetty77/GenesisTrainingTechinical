#include<stdio.h>
#include<stdlib.h>
void main()
{
    /*int *p,n,s;
    printf("Enter array size:");scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("enter new size:");
    scanf("%d",&s);
    p=(int *)realloc(p,(n+s)*sizeof(int));
    printf("Enter new %d elements:",s);
    for(int i=n;i<(n+s);i++)
    scanf("%d",&p[i]);

    for(int i=0;i<n+s;i++)
    {
        printf("%d ",*(p+i));
    }*/

    int **p,nr,nc,r,c;
    printf("enter no of rows:");scanf("%d",&nr);
    printf("enter no of columns:");scanf("%d",&nc);
    p=(int **)malloc(nr*sizeof(int));
    for(r=0;r<nr;r++)
    {
        p[r]=(int *)malloc(nc*sizeof(int));
    }
    printf("Enter %d elements:",nr*nc);

    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            scanf("%d",&p[r][c]);
        }
    }
    for(r=0;r<nr;r++)
    {
        for(c=0;c<nc;c++)
        {
            printf("%d ",p[r][c]);
        }
        printf("\n");
    }

    

}