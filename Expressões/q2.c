#include<stdio.h>
 
int main(){
    float f, p;
    scanf("%f%f", &f, &p);
    float c = (f-32.0)*5.0/9.0, mm = p*25.4;
    printf("O VALOR EM CELSIUS = %.2f\n", c);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", mm);
    return 0;
}