/*109). MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO
MODIFY)*/


#include<stdio.h>


int main()
{
    int a=10;
    int *p=&a;

    printf("%d, %d\n", a,*p);

    *p=20;
    printf("%d, %d", a, *p);

    return 0;
}
