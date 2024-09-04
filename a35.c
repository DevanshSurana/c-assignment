//to print sum of digits in number n

#include<stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    int sum=0;
    while(n>0){
        int a=n%10;
        sum =sum+a;
        n=n/10;

    }
    printf("%d", sum);
    
    
    return 0;

}
