//READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)

#include<stdio.h>


int main(){
    int n;
    printf("enter the number of which you want th factors of\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
       if(n%i==0)
       {
        printf("%d\n", i);

       } 

    }


return 0;
}