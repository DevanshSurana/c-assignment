//WRITE A FUNCTION TO READ AN ARRAY AND FOUND OUT MAXIMUM.


#include<stdio.h>


void inputarr(int n, int arr)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        
        
    }
}

int max_arr(int n, int arr[])
{
    
    int max=2147483647;

    
    printf("%d", max);
    if(max<arr[i])
        {
            max=arr[i];
        }

    
    
}

int main()
{
    int n;
    int arr[n];
    inputarr(n,arr);
    max_arr(n,arr);
    


    // return 0;
    // int a=2;
    // a=a<<1;
    // printf("%d",a);
}


