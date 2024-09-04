//assignment 24
#include<stdio.h>
#include<math.h>

int main(){
    float x,n;
    float y;
    printf("enter x");
    scanf("%f", &x);
    printf("enter n");
    scanf("%f", &n);
    if(n==1){
        y=1+x;
    }
    else if(n==2){
        y=1+x/n;
    }
    else if(n==3){
        y=1+pow(x,n);
    }
    else{
        y=1+n*x;
    }
    printf("y=%f", y);

    return 0;
}