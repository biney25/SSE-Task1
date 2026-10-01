#include <stdio.h>
int main(void){
    int a,b;
    a = 5; //0101
    b = 10; //1010
    a = a^b; //1111
    b = b^a; //0101
    a = a^b; //1010
    printf("%d %d", a , b);
}