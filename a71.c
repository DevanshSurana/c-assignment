/*Write a program in C to find the pivot element of a sorted and rotated array
using binary search. Pivot element is the only element in input array which is
smaller than its previous element. A pivot element divided a sorted rotated array
into two monotonically increasing array.*/

#include<stdio.h>


int main()
{
    int n;
    printf("enter the number of elements in sorted array\n");
    scanf("%d", &n);
    int arr[n];

    printf("input a sorted and rotated array\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

    }

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            printf("pivot element is %d", arr[i+1]);

        }
        
    }
    
    
    

    return 0;
}