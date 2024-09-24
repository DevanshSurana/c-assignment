//program to read an array of integer 10 and count total no of odd and even integers

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

    int count_eve=0;
    int count_odd=0;
    int zeros=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            zeros++;
        }
        else if(arr[i]%2==0)
        {
            count_eve++;
        }
        else
        {
            count_odd++;
        }
    }

    printf("no of even numbers %d \n", count_eve);
    printf("no of odd numbers %d \n", count_odd);
    printf("no of zeros %d \n", zeros);

    return 0;
}