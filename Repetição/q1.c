#include<stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        double x,a,b,c,d;
        scanf("%lf %lf %lf %lf %lf", &x,&a,&b,&c,&d);
        double renda = x*a/100.0 + x*b*5/100.0 + x*c/10.0 + x*d*20/100.0;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, renda);
    }
    return 0;
}

