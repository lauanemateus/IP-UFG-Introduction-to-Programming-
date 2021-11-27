#include<stdio.h>

/**
* Função que calcula o valor de pi usando a série proposta por John Wallis
* @param n quantidade de termos da série
* @return o valor aproximado da constante pi
*/
double compute_pi( int n );

int main(){
    int n;
    scanf("%d", &n);
    printf("%.12lf\n", compute_pi(n));
    return 0;
}

double compute_pi(int n){
    double i,j;
    int cont=0;
    double pi = 1;
    for(i=1,j=2;cont<n; ){
        pi = pi * j/i;
        if(cont%2==1) j+=2;
        else i+=2;
        cont++;
    }
    return pi*2;
}