/*Write a program in C to find the pivot element of a sorted and rotated array
using binary search. Pivot element is the only element in input array which is
smaller than its previous element. A pivot element divided a sorted rotated array
into two monotonically increasing array.*/

#include<stdio.h>


int main()
{
    int rotated_array[]={4,5,6,7,8,9,10,1,2,3};
    int n=sizeof(rotated_array)/sizeof(rotated_array[0]);

    


    //binary search
    int s=0;//start
    int e=n;//end
    int mid;

    while(s<=e)
    {
        mid=(s+e)/2;

        if(rotated_array[mid]>rotated_array[s])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }

    printf("%d", mid+1);

    


    return 0;
}