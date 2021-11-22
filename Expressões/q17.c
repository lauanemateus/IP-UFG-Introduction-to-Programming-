#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("NOTAS DE %d = %d\n", 100, x/100);
    x = x%100;
    printf("NOTAS DE %d = %d\n", 50, x/50);
    x = x%50;
    printf("NOTAS DE %d = %d\n", 10, x/10);
    x = x%10;
    printf("MOEDAS DE %d = %d\n", 1, x);
    return 0;
}