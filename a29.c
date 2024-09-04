//palindrom check

#include<stdio.h>

int main()
{
    int n;
    printf("enter a number to check\n");
    scanf("%d", &n);
    int orgn=n;
    int sum=0;
    
    while(n>0){
       int b=n%10;
       sum=(sum*10)+b;
       n=n/10;


    }
 
    if(orgn==sum){
        printf("palindrome!\n");
    }
    else{
        printf("not palindrome!\n");
    }
    return 0;
}