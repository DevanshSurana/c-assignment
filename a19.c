//check whether if entered char is small case or not

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
    return 0;


}