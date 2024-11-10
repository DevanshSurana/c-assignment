#include<stdio.h>


int main()
{
    char str[20];
    // fgets(str,20,stdin);
    // printf("%s",str);

    int c=getchar();
    int d=putchar(c);
    printf("\n%c  \n", d);

    return 0;
}