//READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
#include<stdio.h>


int main()
{
    int n;
    int sum=0;
    
    do
    {
        sum+=n;
        scanf("%d", &n);
        

    }while(n>0);
    
    printf("%d", sum);



return 0;
}

