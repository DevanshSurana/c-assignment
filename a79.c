/*WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY
X AND Y .*/

#include<stdio.h>
int swap(int *p, int*q)
{
    int temp=*p;
    *p=*q;
    *q=temp;

    printf("%d %d", *p, *q);
}


int main()
{
    int a,b;
    printf("enter two numers");
    scanf("%d" "%d", &a, &b);

    swap(&a, &b);





    return 0;
}