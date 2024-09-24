//PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.

#include<stdio.h>


int main()
{
    int n;
    printf("enter the numbers u want to enter");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_no=-2147483647;
    int sec_max;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>max_no)
        {
            sec_max=max_no;
            max_no=arr[i];
            
        }
        else if(arr[i]>sec_max&&arr[i]<max_no)
        {
            sec_max=arr[i];
        }
    }
    

    printf("%d \n%d", max_no, sec_max);



    return 0;
}