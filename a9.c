/*day hour min sec to seconds*/
#include<stdio.h>

int main(){
    int s,m,h,d;
    printf("enter days hours minutes seconds \n");
    scanf("%d" "%d" "%d" "%d", &d, &h, &m, &s);
    int ds=d*24*60*60;
    int hs=h*60*60;
    int ms=m*60;
    int t=ds+hs+ms+s;
    printf("time in seconds = %d", t);
    return 0;

}