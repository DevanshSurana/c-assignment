//PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD.

#include<stdio.h>


int main()
{   
    int n;
    printf("enter the no. of elements in 2 arrays");
    scanf("%d", &n);

    int ar1[n], ar2[n], sum[n];

    printf("enter the elements of 1st array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar1[i]);
    }
    printf("enter the elements of 2nd array\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar2[i]);
    
    }

    for(int i=0; i<n; i++)
    {
        sum[i]=ar1[i]+ar2[i];
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", sum[i]);
    }



    return 0;
}