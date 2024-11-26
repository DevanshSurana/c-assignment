/*WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS.
THE PERMUTATIONS*/

#include<stdio.h>
#include<string.h>

void swap(char *p, char *q)
{
    char temp =*p;
    *p=*q;
    *q=temp;

}

void permutation(char *s, int x, int y )
{
    if(x==y)
    {
        printf("%s\n",s);
    }
    else
    {
        for(int i=x; i<=y; i++)
        {
            swap((s+x),(s+i));
            permutation(s,x+1,y);
            swap((s+x),(s+i));
        }
    }
}


int main()
{
    char str[10];
    printf("enter the string");
    int n;
    scanf("%s", &str);
    n=strlen(str);
    printf("all permutation of given string are\n");
    permutation(str,0,n-1);
    



    
    return 0;
}