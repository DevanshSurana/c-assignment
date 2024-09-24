//PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.

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

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<m; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}

