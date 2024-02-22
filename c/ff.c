#include<stdio.h>
void main()
{
    int nr,nc;
    printf("no of rows:");scanf("%d",&nr);
    printf("no of columns:");scanf("%d",&nc);
    int a[nr][nc],b[nr][nc];
    int i,j,k;
    int sum=0;
    printf("enter %d elements for a array:",nr*nc);
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter %d elements for b array:",nr*nc);
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            for(sum=0,k=0;k<nc;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            printf("%2d ",sum);
        }
        printf("\n");
    }

}