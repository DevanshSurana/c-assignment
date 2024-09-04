//program to print odd 
#include<stdio.h>


int main(){
    int n;
    printf("enter the no. of odd digits you want to print\n");
    scanf("%d", &n);
    for(int i=1; i<=(2*n-1); i++){
        if(i%2!=0){
            printf("%d\n", i);
        }
    }


return 0;
}