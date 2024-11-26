/*IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
LAST N DIGITS

FOR EXAMPLE FLIP(123, 2)= 132 ; (HERE N=2) FLIP(12345,3)= 12543 (HERE N=3).*/


#include<stdio.h>
#include<math.h>

int flip(int n, int N)
{
    
    int sum=0;
    for(int i=0; i<N; i++)
    {
        int rem=n%10;
        sum=sum*10+rem;
        n=n/10;

    }
    // for loop is used instead of math.h pow beacuse pow returs answer in float
    for(int i=0; i<N; i++)
    {
        n=n*10;
    }
    n=n+sum;
    return n;
}


int main()
{
    int n,N;
    printf("enter the number and the no. by which you want to flip");
    scanf("%d %d", &n, &N);

    printf("required answer :%d", flip(n,N));


    return 0;
}