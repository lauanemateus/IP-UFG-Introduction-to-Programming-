#include<stdio.h>

double _abs(double x){
    if(x<0) return -x;
    else return x;
}

int main(){
    double n,e, r=1, erro;
    int i;
    scanf("%lf %lf", &n, &e);
    while((erro = _abs(n-r*r)) > e){
        r = (r + n/r)/2;
        erro = _abs(n-r*r);
        printf("r: %.9lf, err: %.9lf\n", r, erro);
    }
    return 0;
}