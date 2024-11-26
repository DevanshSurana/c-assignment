/*WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC
MEMORY ALLOCATION.*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
    printf("enter dimensions of first and second matrix");
    int l,m,n;
    //memory allocation of rows
    scanf("%d %d %d",&l, &m, &n);
    int **m1, **m2, **ans;
    m1=(int **)malloc(l*sizeof(int *));
    m2=(int **)malloc(m*sizeof(int *));
    ans=(int **)malloc(l*sizeof(int *));
    //memory allocation of columns of each rows
    for(int i=0; i<l; i++)
    m1[i]=(int *)malloc(m*sizeof(int));
    for(int i=0; i<m; i++)
    m2[i]=(int *)malloc(n*sizeof(int));
    for(int i=0; i<l; i++)
    ans[i]=(int *)malloc(n*sizeof(int));

    //inputing elements of first matrix
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<m; j++)
        {
            
            printf("enter a%d%d element of first matrix",i,j);
            scanf("%d", &m1[i][j]);
        }
    }
    //inputting elements of second matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("enter a%d%d element of second  matrix",i,j);
            scanf("%d", &m2[i][j]);
            
        }
    }

    //intialising ans matrix to zero
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<n; j++)
        {
            ans[i][j]=0;
        }
    }


    //matrix multiplication
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }

    //output ans matrix
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d  ", ans[i][j]);
        }
        printf("\n");
    }

    //freeing up columns
    for(int i=0; i<l; i++)
    free(m1[i]);
    for(int i=0; i<m; i++)
    free(m2[i]);
    for(int i=0; i<l; i++)
    free(ans[i]);
    //freeing up rows
    free(m1);
    free(m2);
    free(ans);
    
    return 0;
}