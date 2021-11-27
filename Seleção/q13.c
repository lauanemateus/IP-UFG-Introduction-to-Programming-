#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int soma =a+b+c+d;
    int maior = a;
    if(maior<b) maior = b;
    if(maior<c) maior = c;
    if(maior<d) maior = d;
    soma-=maior;
    printf("%d\n", soma);
    return 0;
}