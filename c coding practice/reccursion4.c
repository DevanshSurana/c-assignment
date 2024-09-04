//fib sequence
#include<stdio.h>
int fib(int n);

int main(){

    int n;
    printf("enter a number\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("%d\n", fib(i));
    }
    
    return 0;
}
int fib(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
   
    int nm=fib(n-1)+fib(n-2);
    return nm;
   
   }