//function to check whether the number is paplindrome or not

#include<stdio.h>
void palindrome(int n)
{
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
}


int main()
{
    int n;
    scanf("%d", &n);

    palindrome(n);


    return 0;
}