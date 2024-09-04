#include<stdio.h>

void printHW(int count);

int main(){
    int num;
    printf("enter a number\n");
    scanf("%d", &num);
    printHW(num);
    return 0;
}
void printHW(int count){
    if(count==0){
        return;
    }
    else{
    printf("hello word\n");
    printHW(count-1);
}
}