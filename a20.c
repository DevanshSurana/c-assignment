/*calc using switch case*
/*iprogram to print max of 3 numbers using logical operator &&*/

#include<stdio.h>

int main(){
    int n,a,b;
    printf("if you want to perform addition press 1. \nif you want to perform substraction press 2. \nif you want to perform multiplication press 3. \nif you want to perform division press 4. \n");
    scanf("%d", &n);
    switch(n){
        case 1:
        printf("enter 2 number to add\n");
        scanf("%d" "%d", &a, &b);
        printf("%d",a+b);
        break; 
        
        case 2:
        printf("enter 2 number to substract\n");
        scanf("%d" "%d", &a, &b);
        printf("%d",a-b);
        break;

        case 3:
        printf("enter 2 number to multiply\n");
        scanf("%d" "%d", &a, &b);
        printf("%d",a*b);
        break;

        case 4:
        printf("enter dividend and divisor respectively\n");
        scanf("%d" "%d", &a, &b);
        printf("%d",a/b);
        break;
    }
    
   
    
return 0;
}  