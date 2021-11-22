#include<stdio.h>
 
int main(){
    double salario, gasto;
    scanf("%lf%lf", &salario, &gasto);
    double a = 0.7*salario/100.0, b = a*gasto, c = 0.9*b;
 
    printf("Custo por kW: R$ %.2lf\n", a);
    printf("Custo do consumo: R$ %.2lf\n", b);
    printf("Custo com desconto: R$ %.2lf\n", c);
 
    return 0;
}