//to print 1,4,9,16,25,64........

#include<stdio.h>


int main(){
    
int n;
printf("enter the number of no.s u want to print");
scanf("%d",&n);

for(int i=1; i<=n; i++)
{
    printf("%d ", i*i);
}





return 0;
}