/*95)WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/

#include<stdio.h>
#include<string.h>

struct employee
{
    char id[15];
    char name[30];
    float pay;
};


struct employee *update_all_elements(struct employee emp[],int n)
{
    for(int i=0; i<n; i++)
    strcat(emp[i].id,"F24-2500");
    struct employee *ptr=emp;
}



int main()
{
    int n;
    printf("enter number of employees");
    scanf("%d", &n);
    struct employee emp[n];

    for(int i=0; i<n; i++)
    {
        scanf("%s" "%s" "%f", &emp[i].id,&emp[i].name,&emp[i].pay);
    }

    struct employee *ptr=update_all_elements(emp,n);
    for(int i=0;i<n;i++)
        printf("ID: %s \nName: %s \nPay \n: %f",(ptr+i)->id,(ptr+i)->name,(ptr+i)->pay);
    


    return 0;
}