/*iprogram to print max of 3 numbers*/
#include<stdio.h>

int max(int x, int y){
    if(x>y){
        return x;
    
    }
    else{
        return y;
    }
}

int main(){
    int a,b,c;
    printf("enter 3 numbers \n");
    scanf("%d" "%d" "%d", &a, &b, &c);
    int m= max(a,max(b,c));
    printf("%d is the maximum no.");
    return 0;
}