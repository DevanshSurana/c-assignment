//sum of individual digits of n
#include<stdio.h>

int main(){
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int sum=0;

    while(n>0){
        int b=n%10;
        sum=sum+b;
        n=n/10;
    }

    printf("%d", sum);

    return 0;
}

