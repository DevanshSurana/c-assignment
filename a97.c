/*WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.*/

#include<stdio.h>

int vowel(char *ptr)
{
    int vowels=0;
    int i=0;
    while(ptr[i]!='\0')
    {
        if(ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u')
        vowels++;
        i++;
    }
    return vowels;


}


int main()
{
    char string[50];
    fgets(string,50,stdin);

    printf("no. of vowels= %d",vowel(string) );

    return 0;
}