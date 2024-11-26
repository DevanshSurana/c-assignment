/*WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.DAT”.*/

#include<stdio.h>


int main()
{
    FILE *fp;
    fp=fopen("LNMIITSTUDENT.DAT","a");
    if(!fp)
    {
        printf("could not open the file");

    }

    char ch;
    while(ch!='\n')
    {
        scanf("%c", &ch);
        fprintf(fp,"%c",ch);
        
    }

    fclose(fp);

    

    return 0;
}