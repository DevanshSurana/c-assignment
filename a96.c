/*WRITE A C PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING
POINTERS.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{   
    int n;
    printf("entr the number of strings :");
    scanf("%d", &n);
    getchar();
    char *str[n];
    char temp[100];

    //allocating memory to each string
    for(int i=0; i<n; i++)
    {
        
        
        str[i] = (char *)malloc(100 * sizeof(char));
        fgets(str[i],100,stdin);
        
        
    }

    //sorting strings
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    
    //printing srtings
    for(int i=0; i<n; i++)
    { 
        fputs(str[i], stdout);
        printf("\n");
    }
    //free allocated memory
    for(int i=0; i<n; i++)
    free(str[i]);

    
    
    
    return 0;
}