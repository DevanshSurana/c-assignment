/*iprogram to print max of 3 numbers using logical operator &&*/

#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter 3 no.s \n");
    scanf("%d" "%d" "%d", &a, &b, &c);
    int t=(a>b)?a:b;
    int p=(t>c)?t:c;
    printf("%d is max", p);
return 0;
}