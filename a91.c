/*91)WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.*/

#include<stdio.h>

int squr(int *ptr)
{
    int square=(*ptr) * (*ptr);
    return square;
}
int cube(int *ptr)
{
    int cu=(*ptr) * (*ptr) * (*ptr);
    return cu;
}


int main()
{
    int n;
    scanf("%d", &n);
    
    


    printf("%d %d" ,squr(&n), cube(&n));




    return 0;
}


