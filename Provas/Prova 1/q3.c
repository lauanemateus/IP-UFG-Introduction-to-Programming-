#include<stdio.h>

int main(){
    int x, X, uf, div=0, div1=0, div2=0;
    scanf("%d %d", &x,&uf);
    X = x;
    div1 += 2*(x/10000000);
    x=x%10000000;
    div1 += 3*(x/1000000);
    x=x%1000000;
    div1 += 4*(x/100000);
    x=x%100000;
    div1 += 5*(x/10000);
    x=x%10000;
    div1 += 6*(x/1000);
    x=x%1000;
    div1 += 7*(x/100);
    x=x%100;
    div1 += 8*(x/10);
    x=x%10;
    div1 += 9*x;

    div1 = div1%11;
    if(div1==10) div1=0;

    div2 += (uf/10)*7 + (uf%10)*8 + div1*9;
    div2 = div2%11;
    if(div2==10) div2=0;

    //div = div1*10 + div2;
    //printf("div = %d, div1=%d div2=%d\n", div, div1,div2);
    if(uf<1 || uf>28) printf("CODIGO DA UF INVALIDO!\n");
    else{
        if(uf<=9) printf("%d%d%d/%d%d", X, 0, uf, div1, div2);
        else printf("%d%d/%d%d", X, uf, div1, div2);
    }

    return 0;
}