//guessing game

#include<stdio.h>


int main()
{
    int n;
    printf("guess th number between 1-10\n");
    scanf("%d", &n);

    int t=5;
    while(n!=t)
    {
        printf("oops! wrong guess, try again\n");
        scanf("%d", &n);

    }
    printf("correct guess\n");

    return 0;
}