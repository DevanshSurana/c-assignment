/*cut off mark*/
#include<stdio.h>

int main(){
    int p,c,m,e;
    printf("enter marks of physic chem math and enterance exam \n");
    scanf("%d" "%d" "%d" "%d", &p, &c, &m, &e);
    int t=0.5*p+ 0.5*c+ 0.5*m+ e;
    printf("cut-off mark %d", t);
    return 0;
}