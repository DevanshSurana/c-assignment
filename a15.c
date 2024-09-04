/*program to print division*/
#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("enter marks of 5 subjects \n");
    scanf("%d" "%d" "%d""%d" "%d", &a, &b, &c, &d, &e);
    int t=a+b+c+d+e;
    int p=t/5;
    if(p>=60){
        printf("1st Div");
    }
    else if(p<60 && p>=50){
        printf("2nd Div");
    }
    else if(p<50 && p>=30){
        printf("3rd Div");
    }
    else{
        printf("fail");
    }
    return 0;

}
