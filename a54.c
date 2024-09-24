//program to read array of 10 integer and print the sum of it

#include<stdio.h>


int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d", &n);

    int arr[n];

    int sum=0;
    

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }

    printf("sum is %d", sum);


    return 0;
}