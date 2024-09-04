/*program to calculate area of triangle*/
#include<stdio.h>

int main(){
    int b,h;
    printf("enter base length \n");
    scanf("%d", &b);
    printf("enter height \n");
    scanf("%d", &h);
    int A=b*h*0.5;
    printf("area is %d", A);
    return 0;
}