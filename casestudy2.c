#include<stdio.h>


int main()
{
    int n,m;
    scanf("%d" "%d",&n, &m);
    int jars[n];
    for(int i=0; i<n; i++)
    {
        jars[i]=0;
    }
    for(int i=1; i<=m; i++)
    {
        int a,b,k;
        scanf("%d" "%d" "%d", &a, &b, &k);
        for(int j=a-1; j<b; j++)
        {
            jars[j]+=k;
        }

    }
    float sum=0.00;
    for(int i=0; i<n; i++)
    {
        sum+=jars[i];
    }
    float avg=sum/n;
    printf("%f", avg);


    return 0;
}