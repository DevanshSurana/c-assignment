/*WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
POINTERS.*/

#include<stdio.h>

int main()
{   
    int n;
    printf("enter the number of strings");
    scanf("%d", &n);
    char string[n][50];

    for(int i=0; i<n; i++)
    {
        fgets(string[i],50,stdin);
    }
    
    return 0;
}