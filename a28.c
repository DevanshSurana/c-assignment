// //program to print armstrong no
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    int orgn;
 
    printf("enter a number\n");
    scanf("%d", &n);
    orgn=n;
      int a=0;
      
    while(n>0){
      
       int b=n%10;
        a=a+pow(b,3);
        n=n/10;

    }
    if(a==orgn){
        printf("armstrong\n");
    }
   
    else{
    printf("not armstrong\n");
    }
     printf("%d\n", orgn);
     printf("%d", a);

     float c=5;
      printf("%d\n", (int)pow(c,3));


   
    return 0;
}
