//PROGRAM TO PRfloat 1/1!+2/2!+3/3!+4/4!,.........N.
#include<stdio.h>

float fact(int n);


int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    float sum=0.0;
    for(int i=1; i<=n; i++)
    {
        sum+=(i/fact(i));
        // printf("%f\n", sum);
    }
    printf("%f\n", sum);
    // printf("%f\n", fact(n));



return 0;
}
float fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    float factorial=fact(n-1)*n;
    
    return factorial;



}