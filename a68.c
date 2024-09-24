//PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THEIR VALUE AND STORE THEM IN THIRD MATRIX.

#include<stdio.h>


int main()
{
    int n1,m,n2;
    printf("enter the dimension of first matrix");
    scanf("%d" "%d", &n1, &m);
    printf("enter the dimension of second matrix");
    scanf("%d" "%d", &m, &n2);

    int ar1[n1][m];
    int ar2[m][n2];
    int a[n1][n2];

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &ar1[i][j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n2; j++)
        {
            scanf("%d", &ar2[i][j]);
        }
    }
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            a[i][j]=0;
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            for(int k=0; k<m; k++)
            {
                a[i][j]+=ar1[i][k]*ar2[k][j];
            }
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}