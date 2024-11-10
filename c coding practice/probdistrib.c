#include<stdio.h>

float probdist(float a[][2], int n, int x)
{
    
    float prbdist=0;
    for(int i=0; i<n; i++)
    {
        if(i<x)
        {
            prbdist+=a[i][1];
        }
    }
    return prbdist;



}

int main()
{
    int n,x;
    scanf("%d", &n);
    float a[n][2];

    for(int j=0; j<2; j++)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    
    scanf("%d", &x);

    printf("%f", probdist(a,n,x));


    


    return 0;
}