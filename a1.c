/*program to calculate simple interest*/
#include<stdio.h>

int main(){
    int p,r,t;
    printf("enter principal \n");
    scanf("%d", &p);
    printf("enter rate(in percentage) \n");
    scanf("%d", &r);
    printf("enter time(in years) \n");
    scanf("%d", &t);
    int si=p*r*t;
    printf("simple interest is %d", si);
    return 0;
}