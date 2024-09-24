//program to read an array of integer 10 and count total no of +ve, -ve and zeros

#include<stdio.h>


int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d", &n);

    int arr[n];
    

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count_pos=0;
    int count_neg=0;
    int zeros=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            zeros++;
        }
        else if(arr[i]>0)
        {
            count_pos++;
        }
        else
        {
            count_neg++;
        }
    }

    printf("no of even numbers %d \n", count_pos);
    printf("no of neg numbers %d \n", count_neg);
    printf("no of zeros %d \n", zeros);

    return 0;
}
