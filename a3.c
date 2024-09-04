/**progtam to calculate gross salary*/
#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter basic salry \n");
    scanf("%d", &a);
    printf("enter HRA \n");
    scanf("%d", &b);
    printf("enter other allowances \n");
    scanf("%d", &c);
    int grossSal=a+b+c;
    printf("gross salary is %d \n", grossSal);
    return 0;
}