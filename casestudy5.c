/*ISFIBO
Input Format
The first line contains T, number of test cases.
T lines follows. Each line contains an integer N.
*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>
//function for checking a nuber is perfect square or not which returns bool
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