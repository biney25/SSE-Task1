#include <stdio.h>
int main(void){
    int num;
    printf("Enter the number you want to check is prime or not: ");
    scanf(" %d", &num);
    int isprime = 0;
    for (int i=num;i>=2;i--)
    {
        if (num%i==0)
        {
            isprime = 1;
        }
    }
    if (isprime==0)
    {
        printf("The given number is prime.");
    }
    else if (isprime==1)
    {
        printf("The given number is not prime.");
    }
}