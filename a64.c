//PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.

#include<stdio.h>


int main()
{
    int n,m;
    printf("enter the dimension of matrix");
    scanf("%d" "%d", &n, &m);

    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum1,sum2,sum3;
    sum1=sum2=sum3=0;

    for(int j=0; j<m; j++)
    {
        sum1+=arr[0][j];
    }
    for(int j=0; j<m; j++)
    {
        sum2+=arr[1][j];
    }
    for(int j=0; j<m; j++)
    {
        sum3+=arr[2][j];
    }


    printf("%d %d %d", sum1, sum2, sum3);


    

    return 0;
}