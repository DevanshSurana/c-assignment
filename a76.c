//function for even or odd
#include<stdio.h>

int isEO(int n)
{
    if(n%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{   
    int n;
    printf("enter a natural number");
    scanf("%d", &n);


    if(isEO(n))
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    


    return 0;
}