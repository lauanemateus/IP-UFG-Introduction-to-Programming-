#include<stdio.h>
 
int main(){
    float preco, p1, p2;
    scanf("%f%f%f", &preco, &p1, &p2);
    printf("O VALOR DO CARRO E = %.2f\n", preco+(preco*p1/100)+(preco*p2/100));
    return 0;
}