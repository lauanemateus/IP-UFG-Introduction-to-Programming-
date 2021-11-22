#include<stdio.h>
#define PI 3.14159
int main(){
    float raio, h;
    scanf("%f%f", &raio, &h);
    float at = 2*(PI*raio*raio) + (2*PI*raio*h);
    printf("O VALOR DO CUSTO E = %.2f\n", at*100);
    return 0;
}