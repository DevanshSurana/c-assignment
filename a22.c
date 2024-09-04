// to calculate factorial of a number
#include<stdio.h>

int fact(int n);
int main(){
    int n;
    printf("enter a number");
    scanf("%d", &n);
    printf("factorial of %d is %d", n, fact(n));

    return 0;
}

int fact(int n){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial=factorial*i;
    }
    return factorial;

}