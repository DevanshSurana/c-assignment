/*swap two variavles withot using third variable*/
#include<stdio.h>

int main(){
    int a,b;
    printf("enter 2 numbers \n");
    scanf("%d" "%d", &a, &b);
   a=a+b;
   b=a-b;
   a=a-b;
    printf("swapped! \n %d \n %d", a, b);
    
    return 0;
}