//PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.

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

    int max_no=-2147483647;
    int min_no=2147483647;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]>max_no)
            {
                max_no=arr[i][j];
            }
            if(arr[i][j]<min_no)
            {
                min_no=arr[i][j];
            }
        }
    }

    printf("%d \n%d", max_no, min_no);



    return 0;
}