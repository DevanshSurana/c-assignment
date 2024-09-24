/*
10000
01000
00100
00010
00001
*/

#include<stdio.h>


int main()
{
    int n;
    printf("enter the no. of rows u want to print");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++)
        {
            printf("0");
        }
        printf("1");
        for(int k=n-i; k>=1; k--)
        {
            printf("0");
        }
        printf("\n");
            
    }



    return 0;
}