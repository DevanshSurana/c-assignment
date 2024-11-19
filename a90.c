/*WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
USING POINTERS.*/

#include<stdio.h>

int length_with_spaces(char *string)
{
   char *ptr=string;
   int count=0;
   while(*ptr!='\0')
   {
    ptr++;
    count++;

   }
   return count;

   
}

int length_without_spaces(char *string)
{
   char *ptr=string;
   int count=0;
   while(*ptr!='\0')
   {
    if(*ptr!=' ')
    {
        count++;
    }
    ptr++;
   }
   return count;

   
}


int main()
{
    char string[]="my name is devansh";
    int len_with_spaces=length_with_spaces(string);
    int len_without_spaces=length_without_spaces(string);
    printf("%d \n%d",len_with_spaces, len_without_spaces);

    return 0;
}