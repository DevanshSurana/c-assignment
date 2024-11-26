/*WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.*/

#include<stdio.h>


int main()
{
    FILE *fp;
    char ch;
    fp=fopen("a102test.txt", "r");

    int words=1;
    int characters=0;

    if(!fp)
    {
        printf("could not open file");
    }
    ch=getc(fp);

    while(ch!=EOF)
    {
        characters++;
        if(ch==' ')
        {
            words++;
        }
        ch=getc(fp);

    }

    printf("no. of characters :%d \nno of words :%d ", characters,words);

    fclose(fp);

    return 0;
}