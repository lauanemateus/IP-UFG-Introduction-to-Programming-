#include<stdio.h>
 
int main(){
    double m,a,t;
    scanf("%lf%lf%lf", &m,&a,&t);
    double v, s, w;
    v = a*t*3.6, s = a*t*t/2, w = (1000*m*v*v/2)/(3.6*3.6);
    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf\n", v,s,w);
    return 0;
}