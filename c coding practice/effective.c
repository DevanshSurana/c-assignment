//to find effective for given events and their probability
#include<stdio.h>


int main()
{   
    int n;
    scanf("%d", &n);
    float a[n][2];
    for(int j=0; j<2; j++)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%f",&a[i][j]);
        }
    }

    //to calculate effective
    float effective=0;
    for(int i=0; i<n; i++)
    {
        effective+=a[i][0]*a[i][1];
    }

    printf("%f", effective);




    return 0;
}