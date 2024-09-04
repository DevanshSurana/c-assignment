//READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter a natural number except 1 ");
    scanf("%d", &n);
    for(int i=2; i<sqrt(n); i++)
    {
        
        if(n%i==0)
        {
            printf("composite\n");
            break;
        }
        else
        {
            printf("prime");
        }
    }
}