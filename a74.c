/*Given are one dimensional arrays A and B which are sorted in ascending order.
Write a program to merge them into a single sorted array C that contains every
item form array A and B, in ascending order.*/
#include<stdio.h>


int main()
{   
    int n1,n2,n3;
    
    scanf("%d" "%d", &n1, &n2);
    int a1[n1];
    int a2[n2];
    n3=n1+n2;
    int a3[n3];
    
    
    


    for(int i=0; i<n1; i++)
    {
        scanf("%d", &a1[i]);
    }

    for(int i=0; i<n2; i++)
    {
        scanf("%d", &a2[i]);
    }
    //merging the arrays

    for(int i=0; i<n3; i++)
    {
        if(i<n1)
        {
            a3[i]=a1[i];

        }
        else
        {
            a3[i]=a2[i-n1];
        }
    }

    // for(int i=0; i<n1; i++)
    // {
    
    //     printf("%d ", a1[i]);
    // }
    // printf("\n");

    // for(int i=0; i<n2; i++)
    // {
    
    //     printf("%d ", a2[i]);
    // }
    // printf("\n");

    for(int i=0; i<n3; i++)
    {
    
        printf("%d ", a3[i]);
    }
    printf("\n");



     

    //sorting the merged array by selection sort

    for(int i=0; i<n3-1; i++)
    {
        for(int j=i+1; j<n3; j++)
        {
            if(a3[j]<a3[i])
            {
                int temp=a3[j];
                a3[j]=a3[i];
                a3[i]=temp;
            }
        }
    }
    for(int i=0; i<n3; i++)
    {
    
        printf("%d ", a3[i]);
    }



    


    return 0;
}