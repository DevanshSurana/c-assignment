//check whether a number is prime or not
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            printf("not prime\n");
            break;
        }
        else{
            printf("prime");
        }
    }
    }