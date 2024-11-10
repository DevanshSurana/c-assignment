#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPerfectSquare(int x)
{
    int s=sqrt(x);
    return (s*s==x);
    

}


int main()
{
   int t;
   scanf("%d", &t);
   for(int i=0; i<t; i++)
   {
        int n;
        scanf("%d", &n);
        if(isPerfectSquare(5*n*n-4)||isPerfectSquare(5*n*n+4))
            printf("IsFibo\n");
        
        else
            printf("IsNotFibo\n");
   }
    return 0;
}