
#include<stdio.h>


int main(){
    int n;
    printf("enter the no. of rows you want to print in pyramid");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {   
        for(int k=1; k<=n-i; k++)
        {
            printf(" ");

        }
        for(int j=1; j<=i; j++)
        {
            printf("* ");
        }
        
        
        printf("\n");
    }


return 0;
}