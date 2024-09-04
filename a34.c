//fibonacci sequence

#include<stdio.h>

int main(){
    int n;
    printf("enter number of digits required\n");
    scanf("%d", &n);
    int sum;
    int a=0;
    int b =1;
    for(int i=0; i<n; i++){
        sum=a;
        a=a+b;
        b=sum;
        printf("%d\n", sum);
      
        
    }
    

    return 0;
}