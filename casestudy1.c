#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    scanf("%d", &t);
    

    for(int i=1; i<=t; i++)
    {
        
        char word[100];
        // printf("enter your word: ");
        fgets(word,100,stdin);
        
        int len=strlen(word)-1;
        int flag;
        

        
        
        for(int j=len-1; j>=0; j--)
        {
            flag=0;
            if(word[len-1]>word[j])
            {
                char temp=word[j];
                word[j]=word[len-1];
                word[len-1]=temp;
                flag=1;               
            
            }
            if(flag)
            {
                j=-1;
            }
            

        }


        if(flag==0)
        {
            printf("no answer");
        }
        else
        printf("%s",word);

        

        
    }

    return 0;
}