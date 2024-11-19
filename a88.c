//WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
#include<stdio.h>

int *copy(int arr[],int n, int arr_1[])
{
    for(int i=0; i<n; i++)
    {
        arr_1[i]=arr[i];
    }
    return arr_1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int arr_1[n];
    int *ans=copy(arr,n,arr_1);
    for(int i=0; i<n; i++)
    printf("%d\n", *(ans+i));
    

    return 0;
}