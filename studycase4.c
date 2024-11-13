/*GEM sTONES
Input Format
The first line consists of N, the number of rocks.
Each of the next N lines contain rocks' composition. Each composition consists of lowercase letters of English alphabet.*/
#include<stdio.h>


int main()
{
    int t;
    scanf("%d\n", &t);
    int alphabets[26][t+1];

    //intialising the 2D array with 0
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<t+1; j++)
        {
            alphabets[i][j]=0;
        }
    }

    //filling up tha alphabets array
    for(int i=0; i<t; i++)
    {
        char stone[100];
        fgets(stone,100,stdin);
        int j=0;
        while(stone[j]!='\n')
        {
            alphabets[stone[j]-97][i]=1;
            j++;
        }
        

    }


    //summing up for counting the occurence of each element
    for(int i=0; i<26; i++)
    {
        int sum =0;
        for(int j=0; j<t; j++)
        {
            
            sum+=alphabets[i][j];
        }

        alphabets[i][t]=sum;
    }
    //for testing
    // for(int i=0; i<t+1; i++)
    // {
    //     for(int j=0; j<26; j++)
    //     {
    //         printf("%d  ", alphabets[j][i]);
    //     }
    //     printf("\n");
    // }


    //final answer will be count of those element which occured in each stone
    int ans=0;
    for(int i=0; i<26; i++)
    {
        if(alphabets[i][t]==t)
        {
            ans++;
        }
    }
    printf("%d", ans);




    
    return 0;
}