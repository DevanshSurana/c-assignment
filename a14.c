//differentiate b/w upper, lower case, symbol, digit
#include<stdio.h>

int main(){
    char ch;
    printf("enter a character\n");
    scanf("%c", &ch);
    if(ch>=65&& ch<=90){
        printf("upper case\n");
    }
    else if(ch>=97&&ch<=122){
        printf("lower case\n");
    }
    else if((ch>=33&&ch<=47)||(ch>=58&&ch<=64)||(ch>=123&&ch<=127)){
        printf("symbol\n");
    }
    return 0;
}