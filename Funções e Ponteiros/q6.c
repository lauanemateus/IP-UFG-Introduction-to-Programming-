#include<stdio.h>

/**
* Função que calcula a raiz quadrada de n.
* @param n um numero real qualquer
* @param e o valor do erro 
* @return a raiz quadrada de n
*/
void raiz( double n, double e );
/**
* Valor absoluto de um numero qualquer
* @param n um número real qualquer
* @return o valor absoluto de
*/
double absoluto( double n);

int main(){
    double n,e;
    scanf("%lf %lf", &n,&e);
    raiz(n,e);
    return 0;
}

double absoluto(double n){
    if(n<0) return -n;
    else return n;
}

void raiz(double n, double e){
    int i;
    double r = 1, erro = absoluto(n-r*r);
    for(i=0; erro>e;i++){
        r = (r + n/r)/2;
        erro = absoluto(n-r*r);
        printf("r: %.9lf, err: %.9lf\n", r,erro);
    }
}