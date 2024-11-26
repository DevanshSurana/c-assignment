/*WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS.*/

#include<stdio.h>

#define MAX(x,y) ((x>y)?x:y)


int main()
{
    int x,y;
    printf("enter two numbers");
    scanf("%d %d", &x, &y);

    printf("max of two numbers is %d", MAX(x,y));

    

    return 0;
}