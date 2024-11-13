//WRITE A FUNCTION TO READ LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include<stdio.h>
#include<string.h>

int length(char line[])
{
    int i=0;
    while(line[i]!='\0')
    {
        i++;
    }
    return i-1;
}


int main()
{
    char line[100];
    fgets(line, 100, stdin);
    printf("%d\n", length(line));

    printf("%d",strlen(line)-1);


    return 0;
}