//bubble sort:just check th adjecent elements, if not in correct place then swap

#include<stdio.h>


int main()
{
    int n;
    printf("enter th e no. of elements of array");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}