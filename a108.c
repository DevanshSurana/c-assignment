/*WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE:
A. COPY ONE STRING INTO ANOTHER
B. COMPARE TWO STRINGS
C. CONCAT TWO STRINGS
D. REVERSE A GIVEN STRING*/


#include<stdio.h>
#include<string.h>

void str_cpy(char *p, char *q)
{
    int i;
    for(i=0; p[i]!='\0'; i++)
    {
        p[i]=q[i];
    }
    p[i]='\0';
}


int str_cmp(char *p, char *q)
{
    int diff;
    int i=0;
    while(p[i]!=0||q[i]!=0)
    {
        if(p[i]!=q[i])
        {
            diff=p[i]-q[i];
            break;
        }
        diff=0;
    }

    return diff;
}

void str_cat(char *p, char *q)
{
    int i=0;
    while(p[i]!='\0')
    {
        i++;
    }
    int j=0;
    for(j=i; q[j-i]!='\0'; j++)
    {
        p[j]=q[j-i];

    }
    p[j]='\0';
}
void str_rev(char *p)
{
    int len=str_len(p)-1;

    for(int i=0; i<len/2;i++)
    {
        char temp=p[i];
        p[i]=p[len-1-i];
        p[len-1-i]=temp;
    }
    return p;
}

int str_len(char *p)
{
    int count=0;
    while(p[count]!='\0')
    count++;

    return count+1;
}


int main()
{
    char s1[20]="devansh";
    char s2[20]="my name";

    // str_cmp(s1,"hello");
    // str_cat(s1,s2);

    // printf("%s \n%s",s1,s2);
    // printf("%d", str_cmp(s1,s2));
    // printf("%d", strcmp(s1,s2));

    // printf("%d", str_len(s1));

    // str_rev(s1);

    // printf("%s\n",s1);
    
    

    



    return 0;
}