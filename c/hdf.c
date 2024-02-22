#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    int **p,nr,nc,r,c;
    printf("enter rows:");scanf("%d",&nr);
    printf("enter cols:");scanf("%d",&nc);
    p=(int **) calloc(nr,sizeof(int));
    for(r=0;r<nr;r++)
    p[r]=(int *)calloc(nc,sizeof(int));
    printf("enter %d elements",nr*nc);
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
        free(p[r]);p[r]=NULL;
    }
    free(p);
    p=NULL;
    

}
    