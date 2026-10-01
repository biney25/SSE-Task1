#include <stdio.h>
int main(void){
    int limit;
    printf("Enter the number you want sum till: ");
    scanf(" %d", &limit);
    int sum = 0;
    for (int i = 0; i < limit; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d natural numbers is %d.",limit,sum);
    return 0;   
}