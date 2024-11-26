/*WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC
MEMORY ALLOCATION.*/


#include<stdio.h>


int main()
{
    int m1[2][2];
    int m2[2][2];
    int *matrix1[2]=m1[0][0];
    int *matrix2[2]=m2[0][0];
    int *ans[2];

    
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d", &m1[i][j]);
            
        }
    }
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d", &m2[i][j]);
            
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d",matrix1[i][j]);
        }
    }for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d",matrix2[i][j]);
        }
    }


    // for(int i=0; i<2; i++)
    // {
    //     for(int j=0; j<2; j++)
    //     {
    //         for(int k=0; k<2; k++)
    //         {
    //             ans[i][j]+=matrix1[i][k]*matrix2[k][j];
    //         }
    //     }
    // }

    // for(int i=0; i<2; i++)
    // {
    //     for(int j=0; j<2; j++)
    //     {
    //         printf("%d",ans[i][j]);
    //     }
    // }

    // scanf("%d", &matrix1[1][0]);
    // printf("%d", matrix1[1][0]);


    return 0;
}