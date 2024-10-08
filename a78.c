/*WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.*/

#include<stdio.h>
void isArmstong(int n)
{
    int orgn=n;
      int a=0;
      
    while(n>0)
    {
      
       int b=n%10;
        a=a+pow(b,3);
        n=n/10;

    }
    if(a==orgn)
    {
        printf("armstrong\n");
    }
   
    else
    {
    printf("not armstrong\n");
    }

}


int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);

    isArmstong(n);




    

    return 0;
}