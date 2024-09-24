//PROGRAM TO READ A 3*3 MATRIX AND ADD THEIR VALUE AND STORE THEM INTHIRD MATRIX.

#include<stdio.h>


int main()
{
    int n,m;
    printf("enter the dimension of matrix");
    scanf("%d" "%d", &n, &m);

    int ar1[n][m];
    int ar2[n][m];
    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &ar1[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &ar2[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            a[i][j]=ar1[i][j]+ar2[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }







    return 0;
}