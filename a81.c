/*WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN
ZERO OTHERWISE.*/

#include<stdio.h>
#include<math.h>

int isPrime(int n)

{
    int flag=1;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}


int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    printf("%d", isPrime(n));


    return 0;
}