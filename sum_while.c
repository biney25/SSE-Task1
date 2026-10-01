#include <stdio.h>
int main(void){
    int limit,sum=0;
    printf("Enter the number till you want sum of: ");
    scanf(" %d",&limit);
    int i = 0;
    while (i<limit)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("The sum of %d natural numbers is %d.",limit,sum);
}