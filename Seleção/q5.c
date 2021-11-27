#include<stdio.h>

int main(){
     double x;
     scanf("%lf", &x);
     double y = (int)x/3;
     x = (x-y*3);
     printf("O VALOR A PAGAR E = %.2lf", y*10.0+x*5.0);
    return 0;
}