/*WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.*/

#include<stdio.h>

int no_of_words(char *ptr)
{
    int count=0;
    int i=0;
    
    while(ptr[i]!='\0')
    {
        if(ptr[i]==' ')
        {
            count++;
        }    

        i++;
    }
    return count+1;
}

int main()
{
    char sentence[50];
    fgets(sentence,50,stdin);

    printf("no. of words: %d", no_of_words(sentence));
    
    return 0;
}