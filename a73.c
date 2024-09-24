/*An election is contested by 5 candidates. The candidate is numbered are 1 to 5
and the voting is done by marking the candidate number on the ballot paper.
Write a program to read the ballots and count the votes cast for each candidate
using an array variable count. In case, a number, read is outside the range 1 to 5,
the ballot should be considered as a ‘spoilt ballot’ and the program should also
count the number of spoilt ballots.*/

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
    int checked;  //to check whether that element is already counted before
    int spoilt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>0&&arr[i]<=5)
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
        else
        {
            spoilt++;
        }

    }
    printf("spoilt ballots: %d ", spoilt);



    return 0;
}