#include<stdio.h>

int main(){
    float x;
    scanf("%f", &x);
    printf("NOTA = %.1f CONCEITO = ", x);
    if(x>=0 && x<6) printf("D\n");
    if(x>=6 && x<7.5) printf("C\n");
    if(x>=7.5 && x<9) printf("B\n");
    if(x>=9 && x<=10) printf("A\n");
    return 0;
}