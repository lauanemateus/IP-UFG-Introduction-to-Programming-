#include<stdio.h>

int separaDigitos(int n){
    int a,b,c;
    a = n/100;
    n = n%100;
    b = n/10;
    n = n%10;
    c = n;
    return c*100+b*10+a;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", separaDigitos(n));
    return 0;
}