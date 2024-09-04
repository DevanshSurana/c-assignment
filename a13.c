/*to check whether the given num is even or odd*/
#include<stdio.h>

int main(){
    int n;
    printf("enter a number \n");
    scanf("%d", &n);

    if(n=0){
        printf("no. is neither even nor odd");
    }
    else if(n % 2==0){
        printf("no. is even");
    }
    else{
        printf("no. is odd");
    }

    return 0;
}