/*CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY,
PRICE AND AMOUNT. IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND
PRICE AS INPUT AND CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.*/

#include<stdio.h>




int main()
{
    int n;
    printf("enter no. of entries;");
    scanf("%d", &n);
    struct item
    {
        char item_name[20];
        int quantity;
        float price;
        float amount;
    }it[n];

    for(int i=0; i<n; i++)
    {
        scanf("%s" "%d" "%f" ,&it[i].item_name,&it[i].quantity,&it[i].price);
        it[i].amount=it[i].quantity*it[i].price;
        printf("%s %d %f %f", it[i].item_name,it[i].quantity,it[i].price,it[i].amount);
    }

    

    return 0;
}