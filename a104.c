/*AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY
THE HEXADECIMAL COLOR CODE.*/

#include<stdio.h>

enum colour
{
    red=1,
    yellow,
    green,
    blue,
    pink,
    violet,


}col;
int main()
{
    int n;
    printf("enter 1 for red hex code.\nenter 2 for yellow hex code.\nenter 3 for green hex code.\nenter 4 for blue hex code.\nenter 5 for pink hex code.\nenter 6 for violet hex code.\n");
    
    scanf("%d", &n);

    switch (n)
    {
        case red:
        printf("#FF0000");
        break;

        case yellow:
        printf("#FFFF00");
        break;

        case green:
        printf("#008000");
        break;

        case blue:
        printf("#0000FF");
        break;

        case pink:
        printf("#FFC0CB");
        break;

        case violet:
        printf("#8F00FF");
        break;

        default:
        printf("oops! entered wrong colour code");
        break;
    }


    return 0;
}