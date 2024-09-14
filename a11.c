/*total second to day hour min sec*/
#include<stdio.h>

int main(){
    int t;
    printf("enter time in second\n");
    scanf("%d", &t);
    int m=t/60;
    int s=t%60;
    int min=m%60;
    int h=m/60;
    int ho=h%60;
    int d=h/24;
    printf("%d days \n",d); 
    printf("%d hours \n",ho); 
    printf("%d minutes\n",min); 
    printf("%d seconds\n",s); 
    return 0;

  



}