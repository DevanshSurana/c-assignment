/*WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS
PRESENT IN THE FILE.*/

#include<stdio.h>


int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("test.txt","r");

    if(!ptr)
    {
        printf("file could not open !");

    }

    int vowels=0;

    while(1)
    {
        ch=getc(ptr);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vowels++;
        }
        if(ch==EOF)
        break;
    }
    printf("no of vowels is: %d",vowels);
    



    return 0;
}