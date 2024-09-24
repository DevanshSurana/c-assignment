#include<stdio.h>
#include<math.h>


int main()
{
    int a[4][10];
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int b[10];
    for(int i=0; i<10; i++)
    {
        b[i]=0;
    }

    for(int i=0; i<10; i++)
    {
        for(int j=1; j<4; j++)
        {
            b[i]=b[i]+a[i][j];
        }
    }
    int max1=-2147483647;
    int r1;
    

    for(int i=0; i<10; i++)
    {
        if(a[i][1]>max1)
        {
            max1=a[i][1];
            r1=i;

        }
       
    }
    int max2=-2147483647;
    int r2;
    
    for(int i=0; i<10; i++)
    {
        if(a[i][2]>max2)
        {
            max2=a[i][2];
            r2=i;

        }
        
    }
    int max3=-2147483647;
    int r3;
    
    for(int i=0; i<10; i++)
    {
        if(a[i][3]>max3)
        {
            max3=a[i][3];
            r3=i;

        }
        
    }


    int maxt=-2147483647;
    int r4;


    for(int i=0; i<10; i++)
    {
        if (b[i]>maxt)
        {
           maxt=b[i];
           r4=i;
        }
        
    }

    for(int i=0; i<10; i++)
    {
        printf("total marks of roll no %d is: %d\n", i+1, b[i]);
    }
    printf("max marks in sub1 is %d and was secured bu roll no. %d\n", max1, r1+1);
    printf("max marks in sub2 is %d and was secured bu roll no. %d\n", max2, r2+1);
    printf("max marks in sub3 is %d and was secured bu roll no. %d\n", max3, r3+1);
    printf("max total marks is %d and was secured by :%d\n", maxt, r4+1);



    

    return 0;
}