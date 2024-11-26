/*A FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL
NUMBER, NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N
STUDENTS.*/

#include<stdio.h>

struct student
{
    int roll_no;
    char name[30];
    int total_marks;
}st;


int main()
{
    FILE *fp;
    char ch='Y';
    fp=fopen("LNMIITSTUDENT.JAVA", "w");

    if(!fp)
    {
        printf("file could not open");
    }
    int i=0;

    while(ch=='Y')
    {
        printf("enter student roll number,name & total marks");
        scanf("%d %s %d",&st.roll_no,&st.name,&st.total_marks);
        fprintf(fp,"%d  %s  %d\n",st.roll_no,st.name,st.total_marks);

        printf("do you want to enter next entry (Y/N)");
        fflush(stdin);
        ch=getchar();
        
    }
    fclose(fp);


    return 0;
}