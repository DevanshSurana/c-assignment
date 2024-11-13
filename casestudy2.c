/*FILLING JARS
Input Format
The first line contains two integers N and M separated by a single space.
M lines follow. Each of the M lines contain three integers a, b and k separated by single space.*/
#include<stdio.h>


int main()
{

    int n,m;
    scanf("%d" "%d",&n, &m);
    int jars[n];
    //initialising jars with zero candies
    for(int i=0; i<n; i++)
    {
        jars[i]=0;
    }
    // m number of loops for m operation
    for(int i=1; i<=m; i++)
    {
        int a,b,k;
        scanf("%d" "%d" "%d", &a, &b, &k);
        //adding k number of candies between a & b
        for(int j=a-1; j<b; j++)
        {
            jars[j]+=k;
        }

    }
    //finding avg
    float sum=0.00;
    for(int i=0; i<n; i++)
    {
        sum+=jars[i];
    }
    float avg=sum/n;
    printf("%f", avg);


    return 0;
}