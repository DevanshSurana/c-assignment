/*calc using switch case(char form)*/


#include<stdio.h>

int main(){
    char n;
    int a,b;
    printf("if you want to perform addition press a. \nif you want to perform substraction press b. \nif you want to perform multiplication press c. \nif you want to perform division press d. \n");
    scanf("%c", &n);
    switch(n){
        case 'a':
        printf("enter 2 number to add\n");
        scanf("%d" "%d", &a, &b);
        printf("%d",a+b);
        break; 
        
        case 'b':
        printf("enter 2 number to substract\n");
        scanf("%d" "%d", &a, &b);
        printf("%d",a-b);
        break;
        case 'c':
        printf("enter 2 number to multiply\n");
        scanf("%d" "%d", &a, &b);
        printf("%d",a*b);
        break;

        case 'd':
        printf("enter dividend and divisor respectively\n");
        scanf("%d" "%d", &a, &b);
        printf("%d",a/b);
        break;
        default :
        printf("oops enterd something wrong");
    }
    
   
    
return 0;
}  