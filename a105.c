/*WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS.
THE PERMUTATIONS*/

#include<stdio.h>

void swap(char *p, char *q)
{
    char temp =*p;
    *p=*q;
    *q=temp;

}


int main()
{
    int n;
    printf("enter the length of the string");
    scanf("%d", &n);
    fflush(stdin);

    char string[n+1];
    fgets(string,n+1,stdin);

    // printf("%s", string);
    
    return 0;
}