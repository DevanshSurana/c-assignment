/*iprogram to print max of 3 numbers using logical operator &&*/

#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter 3 no.s \n");
    scanf("%d" "%d" "%d", &a, &b, &c);
    if(a>b&&a>c){
        printf("%d is max", a);
    }
     else if(b>a&&b>c){
        printf("%d is max", b);
    }
     else{
        printf("%d is max", a);
    }
    return 0;
}