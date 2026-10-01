#include <stdio.h>
int fibo(int a){
    if (a==0) return 0;
    if (a==1) return 1;
    return fibo(a-1) + fibo(a-2);  
}
int main(void){
    int n;
    printf("Enter the limit: ");
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }   
}