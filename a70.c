//PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY.

#include<stdio.h>


int main()
{
    int n;
    printf("enter the num. of elements in array");
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //sorting
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    // for(int i=0; i<n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }


    //counting
    int count=0;
    int checked;  //to check whether that element is already counted before //if we not use this then every time the number occur it would get printed
    for(int i=0; i<n; i++)
    {
        if(checked==arr[i])
        {
            continue;
        }
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                
            }
            
        }
        checked=arr[i];
        printf("%d occured %d times\n", arr[i], count);
        count=0;
    }



    return 0;
}