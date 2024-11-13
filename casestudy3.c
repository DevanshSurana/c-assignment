/*FINFING DIGITS
Input format
The first line contains T (number of test cases followed by T lines each containing N).*/
#include<stdio.h>


int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int n;
        int orgn=n;
        scanf("%d", &n);

        int counter=0;
        while(n>0)
        {
            int lastdigit=n%10;
            n=n/10;
            if(orgn%lastdigit==0&&lastdigit!=0)
            {
                counter++;
            }
        }
        printf("%d", counter);
    }


    return 0;
}