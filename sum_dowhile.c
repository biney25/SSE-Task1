#include <stdio.h>
int main(void){
    int limit;
    int i=0,sum=0;
    printf("Enter the number till you want sum of: ");
    scanf(" %d", &limit);
    do
    {
        sum=sum+i;
        i=i+1;
    } while (i<limit);
    printf("The sum of %d natural numbers is %d.",limit,sum);   
}