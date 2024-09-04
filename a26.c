//print sum of all odd & even number b/w 1to 10
#include<stdio.h>

int main(){
    int sumo=0;
    int sume=0;
    for(int i=1; i<=10; i++){
        if(i%2==0){
            sume=sume+i;

        }
        else{
            sumo=sumo+i;
        }
    }
    printf("sum of even=%d\nsum of odd=%d", sume, sumo);
}