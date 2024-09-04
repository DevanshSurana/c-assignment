//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include<stdio.h>


int main(){

    int n;
    printf("how many numbers you want to enter\n");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxNo=-2147483647;
    int minNo=2147483647 ;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>maxNo)
        {
            maxNo=arr[i];
        }

        if(arr[i]<minNo)
        {
            minNo=arr[i];

        }

        

    }
    printf("max no is %d\n min no is %d\n", maxNo, minNo);


    return 0; 
}