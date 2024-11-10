//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.


#include<stdio.h>

void vowel_or_consonant(char c)
{
    if(c==97|c==101||c==105||c==111||c==117)
    {
        printf("you have entered a vowel");
    }
    else
    {
        printf("you have entered a consonant");
    }
    
}


int main()
{
    char c;
    printf("input a lower case character: ");
    scanf("%c", &c);
    vowel_or_consonant(c);


    return 0;
}