/*program to convert temp in farenhiet to celicius*/
#include<stdio.h>

int main(){
    int f;
    printf("input temperature in farenhiet \n");
    scanf("%d", &f);
    double m=f-32;
    double c= m*5/9;
    printf("temperatur in c %lf",c);
    return 0;
}