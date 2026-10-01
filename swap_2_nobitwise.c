#include <stdio.h>
int main(void){
    int a,b;
    a = 531313;
    b = 10242;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d %d", a , b);
}