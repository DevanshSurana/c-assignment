/*WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI
NUBERS.TEST THE FUNCTION FOR N=5,10,AND 15.*/

#include<stdio.h>

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;

    }
    
   
    int fib_n=fib(n-1)+fib(n-2);
    return fib_n;
    
}


int main()
{
    int n;
    printf("enter the number of numbers you want to print");

    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        printf("%d", fib(i));

    }

    

    return 0;
}