/*swap two variavles using third variable*/
#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter 2 numbers \n");
    scanf("%d" "%d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("swapped! \n %d \n %d", a, b);
    
    return 0;
}