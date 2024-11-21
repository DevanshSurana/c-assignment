/*WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.*/

#include<stdio.h>

int max(int *ptr,int n)
{
    int max=ptr[0];
    for(int i=0; i<n; i++)
    {
        if(ptr[i]>max)
        max=ptr[i];
    }
    return max;
}


int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);


    printf("%d", max(arr,n));
    
    


    
    

    return 0;
}