//PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .

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
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }

   
    printf("%d\n %d\n", arr[n-1], arr[n-2]);



    

   

        

    
    


    return 0; 
}
