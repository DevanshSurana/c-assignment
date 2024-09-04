/*Program to read marks of 5 subjects */
#include<stdio.h>


int main(){
    int e,i,p,c,m;
    printf("enter marks of english \n");
    scanf("%d", &e);
    printf("enter marks of IT \n");
    scanf("%d", &i);
    printf("enter marks of physics \n");
    scanf("%d", &p);
    printf("enter marks of chem \n");
    scanf("%d", &c);
    printf("enter marks of maths \n");
    scanf("%d", &m);

    int t=e+i+p+c+m;
    double perc=t/5;
    printf("total marks is equal to %d \n", t);
    printf("percentage= %lf \n", perc);

    return 0;
}