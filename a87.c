/*WRITE A PROGRAM TO READ INFORMATION OF 10 STUDENT AND DISPLAY THE
INFORMATION OF THOSE STUDENT WHOSE MARKS ARE GREATHER THAN 500.(PASSING
ARRAY OF STRUCTURE INTO FUNCTION).*/
#include<stdio.h>


int main()
{
    struct student
    {
        char name[30];
        char roll[9];
        int marks;
    }s[10];
    
    for(int i=0; i<10; i++)
    {
        scanf("%s" "%s" "%d" , &s[i].name,&s[i].roll,&s[i].marks);
    }
    for(int i=0; i<10; i++)
    {
        if(s[i].marks>500)
        {
            printf("%s  %s  %d\n" , s[i].name,s[i].roll,s[i].marks);
            

        }
    }


    return 0;
}