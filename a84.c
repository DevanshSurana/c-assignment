/*WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.*/
#include<stdio.h>


int main()
{
    struct book
    {
        char name[50];
        float price;
        int pages;
        long int isbn;
    }b1,b2,b3;
    scanf("%s" "%f" "%d" "%ld",&b1.name,&b1.price,&b1.pages,&b1.isbn);
    scanf("%s" "%f" "%d" "%ld",&b2.name,&b2.price,&b2.pages,&b2.isbn);
    scanf("%s" "%f" "%d" "%ld",&b3.name,&b3.price,&b3.pages,&b3.isbn);

printf("%s\n %f\n %d\n %ld\n",b1.name,b1.price,b1.pages,b1.isbn);
printf("%s\n %f\n %d\n %ld\n",b2.name,b2.price,b2.pages,b2.isbn);
printf("%s\n %f\n %d\n %ld\n",b3.name,b3.price,b3.pages,b3.isbn);
    
    

    return 0;
}