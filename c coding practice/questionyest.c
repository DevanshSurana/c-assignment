#include<stdio.h>

// float squ(float a)
// {
//     float b=a*a;
//     return b;
// }


int main()
{
    // int i=2;
    // {
    //     int i=4, j=5;
    //     printf("%d %d\n", i,j);
    // }
    // printf("%d %d", i, j);



    // for(int i=3; i<15; i+=3)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // printf("%f", 3/2.0*5.0);


    // int i;
    // printf("enter the value of i");
    // scanf("%d", &i);
    // if(i=5)
    // printf("you have entered 5 \\n %d", i=5);
    // else
    // printf("you have entered something else");

    // return 0;




    // int i=1;
    // while(i<=32767)
    // {
    //     printf("%d", i);
    //     i++;
    // }




//     int i,j;
//     printf("Enter value of i");
//     scanf("%d", &i);
//     switch(i)
//     {
//         default: 
//         printf("hello");
//         case 1 :
//         j = 10 ;
//         printf("case 1\n");
        
//         case 2 :
//         j = 20 ;
//         printf("\ncase 2\n");
    
//     }
//     printf("\n%d", j);







//  int ch = 'a' + 'b' ;
//  switch ( ch )
//  {
//  case 'a' :
//  case 'b' :
//  printf ( "\nYou entered b" ) ;
//  case 'A' :
//  printf ( "\na as in ashar" ) ;
//  case 'b' + 'a' :
//  printf ( "\nYou entered a and b" ) ;
//  } 










// int temp ;
//  scanf ( "%d", &temp ) ;
//  switch ( temp )
//  {
//  case 0...20 :
//  printf ( "\nOoooooohhhh! Damn cool!" ) ;
//  case 20...40 :
//  printf ( "\nRain rain here again!" ) ;
//  case 40...50 :
//  printf ( "\nWish I am on Everest" ) ;
//  default :
//  printf ( "\nGood old nagpur weather" ) ;
//  } 





// int a=1;
// printf(" %d %d %d ", a, ++a, a++);







// float a;
// a=3.14;
// printf("%f", squ(a));


// int a=12345;
// int rev=0;

// while(a>0)
// {
//     int lastdigit=a%10;
//     rev=rev*10+lastdigit;
//     a=a/10;
// }
// printf("%d", rev);


// char str[20];
// fgets(str,15,stdin);
// int d=printf("%s",str);
// printf("\n%d", d);

    int n;
    scanf("%d", &n);
    int a[n];
    int flag=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    int suml,sumr;


        
            
            

    
          for(int i=0; i<n; i++)
            {
                sumr=0;
                suml=0;
                

                
                
                    for(int j=0; j<i; j++)
                    {
                        suml=suml+a[j];
                    }
                    for(int k=i+1; k<n; k++)
                    {
                        sumr+=a[k];
                    }

                


                if(suml==sumr)
                {
                    printf("\n%d  %d   %d", i,suml,sumr);
                    flag=1;
                    break;
                    
                }
                else
                flag=0;

            }
        

    if(flag=0)
    {
        printf("-1");
    }

    







    return 0;
}






