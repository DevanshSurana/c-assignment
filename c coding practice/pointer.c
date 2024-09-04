#include<stdio.h>

int main(){
    int age=18;
    int *ptr=&age;
    int _age=*ptr;

    printf("%d\n", _age);
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));
    return 0;
}