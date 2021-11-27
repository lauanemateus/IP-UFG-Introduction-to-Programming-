#include<stdio.h>

void _max(double v, int n, double l, double * max_v, int * max_n, double * max_l){
    if(*max_l<l){ *max_v = v;
    *max_n = n;
    *max_l = l;}
}

int main(){
    double valor, ini, fim, max_v=0, max_l = 0, i;
    int max_n = 0;
    scanf("%lf %lf %lf", &valor, &ini, &fim);
    for(i=ini;i<=fim;i++){
        double l;
        int n;
        if(i<valor){
            n = 120 + ((valor-i)/0.5)*25;
            l = n*i - 200 - 0.05*n;
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, n, l);
            _max(i, n, l, &max_v, &max_n, &max_l);

        }
        else if(i>valor){
            n = 120 - ((i-valor)/0.5)*30;
            l = n*i - 200 - 0.05*n;
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, n, l);
            _max(i, n, l, &max_v, &max_n, &max_l);
        }
        else if(i==valor){
            n = 120;
            l = n*i - 200 - 0.05*n;
            printf("V: %.2lf, N: %d, L: %.2lf\n", i, n, l);
            _max(i, n, l, &max_v, &max_n, &max_l);
        }
    }
    printf("Melhor valor final: %.2lf\n", max_v);
    printf("Lucro: %.2lf\n", max_l);
    printf("Numero de ingressos: %d\n", max_n);
    return 0;
}