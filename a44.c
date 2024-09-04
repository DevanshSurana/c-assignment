/*AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS
FOLLOWS.

Consumption in unit Rate for Charge
0-200 Re 0.50 per unit


210-400 Rs. 100 plus Re 0.65 per unit excess of 200
401-600 Rs. 230 plus Re 0.80 per unit excess of 400

Above 600 Rs. 425 plus Rs. 125 per unit excess of 600*/

#include<stdio.h>


int main()
{
    int n;
    printf("enter the units\n");
    scanf("%d", &n);
    int pay;

    if(n<=200)
    {
        pay=0.5*n;
    }
    else if(n>=210&&n<=400)
    {
        pay=200+0.65*(n-200);
    }
    else if(n>=401&&n<=600)
    {
        pay=400+0.85*(n-400);
    }
    else if(n>600)
    {
        pay=425+125*(n-600);
    }

    printf("pay Rs %d", pay);



    return 0;
}