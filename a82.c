/*WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
NCR = (!N/(!R*!(N-R)));*/

#include<stdio.h>

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int factorial=fact(n-1)*n;
    return factorial;
}

int ncr(int n, int r)
{
    int NCR=fact(n)/(fact(r)*fact(n-r));
    return NCR;
}


int main()
{
    int n,r;
    printf("enter n and r");
    scanf("%d" "%d", &n, &r);
    printf("%d", ncr(n,r));
    

    return 0;
}