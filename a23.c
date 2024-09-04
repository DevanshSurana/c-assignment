//program to read 2 numbers and calculate power without using header file <math.h>
#include<stdio.h>

int main(){
    int a,b;
    printf("enter a number\n");
    scanf("%d", &a);
    printf("enter power\n");
    scanf("%d", &b);
    int ans=1;
    for(int i=1; i<=b; i++){
        
        ans=ans*a;
    }
  
    printf("required ans is %d", ans);
    return 0;
}

