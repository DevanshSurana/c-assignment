#include<stdio.h>


int main(){
    int n;
    printf("enter no. of lines u want to get printed");
    scanf("%d", &n);

    for(int i=65; i<=65+n-1; i++)
    {
        for(int j=65; j<=i; j++)
        {
            printf("%c", j);
        }
        printf("\n");

    }


return 0;
}