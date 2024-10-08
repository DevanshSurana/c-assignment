#include<stdio.h>
#include<math.h>

float sqr_dist(int x1, int y1, int x2, int y2)
{
    float temp=pow(x2-x1, 2)+pow(y2-y1, 2);
    

    return temp;
}


int main()
{
    int a[10][2];
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int index;
    
    for(int i=0; i<10; i++)
    {
        int min=10000000;
        
        for(int j=0; j<10; j++)
        {
            
            if(i!=j)
            {
                if(sqr_dist(a[i][0],a[i][1],a[j][0],a[j][1])<min)
                {
                    min=dist(a[i][0],a[i][1],a[j][0],a[j][1]);
                    index=j;
                
                }
            }
            

        }
        
        printf("nearest neighbor of %d,%d is %d,%d\n", a[i][0],a[i][1],a[index][0],a[index][1]);
        
        

        
    }
    

    

    return 0;
}