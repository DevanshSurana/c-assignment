#include<stdio.h>


int main()
{
    struct student
    {
        char rollno[10];
        char name[20];
        char department[10];
        char course[6][6];
        
    

    };
    
    struct student student_1={"u24ai074","Devansh Surana", "AI", {"ai101 ","ai103 ", "ec106 ", "hs110 ", "ma105"}};
    

    printf("%s\n%s\n%s\n%s ", student_1.rollno, student_1.name, student_1.department,student_1.course);

    return 0;
}