/*

     *
    ***
   *****
  *******
  *****  
   ***
    *

*/



#include<stdio.h>


int main()
{

    int n;
    printf("enter the level of pattern");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");

        }
        for(int k=1; k<=2*i-1; k++)
        {
            printf("*"); 
        }
        printf("\n");
        
    }

    for(int i=n-1; i>=1; i--)
    {
        for(int l=n-i; l>=1; l--)
        {
            printf(" ");

        }
        for(int m=2*i-1; m>=1; m--)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}