/*Write a program in C to rotate an array by N positions.*/

#include<stdio.h>


int main()
{
    int n,m;
    printf("enter the number of elemnts in the array");
    scanf("%d", &n);
    printf("enter the number of elemnts by which you want to rotate");
    scanf("%d", &m);
    int arr[n];
    
    for(int i=0; i<n ;i++)
    {
        scanf("%d", &arr[i]);
    }

    int arr2[n];

    for(int i=0; i<n; i++)
    {
        if(i-(m-1)<0)
        {
            arr2[i]=arr[i-(m-1)+n];
        }
        else
        {
            arr2[i]=arr[i-(m-1)];
        }

        printf("%d ", arr2[i]);
    }





    return 0;
}