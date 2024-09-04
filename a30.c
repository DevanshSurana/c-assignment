//program to find reverse of number
#include<stdio.h>

int main()
{
    int n;
    printf("enter a number to reverse :");
    scanf("%d", &n);
    int sum=0;
    
    while(n>0){
       int b=n%10;
       sum=sum*10+b;
       n=n/10;


    }
    printf("%d",sum);
    
    return 0;
}