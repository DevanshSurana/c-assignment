/*WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
POINTERS.FOR EXAMPLE,
ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”*/

#include<stdio.h>
#include<string.h>

char *reverse_copy(char *ptr, char *dest_arr)
{
    for(int i=8,j=0; i>=0,j<9; i--,j++)
    {
        dest_arr[i]=ptr[j];
    }
    return dest_arr;
}

int main()
{
    char string[]="SVNITJAVA";
    char *dest_arr;
    printf("%s", reverse_copy(string,dest_arr));
    

    return 0;
}