#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int xm, xc, xd, xu;
    int X = x;
    xm = x/1000, x=x%1000, xc=x/100, x=x%100, xd=x/10, x=x%10, xu=x;
    x = X;
    if(x>=10000){
        printf("Numero invalido!\n");
        return 0;
    }
    if(x>=1000) printf("(quarta ordem)");
    else if(x>=100) printf("(terceira ordem)");
    else if(x>=10) printf("(segunda ordem)");
    else printf("(primeira ordem)");
    printf(" %d = ", x);
    int eh_primeiro=1;
    if(xm != 0 ){
        if(xm == 1) printf("%d unidade de milhar", xm);
        else printf("%d unidades de milhar", xm);
        eh_primeiro=0;
    }
    if(xc != 0){
        if(!eh_primeiro){
            printf(" + ");
        }
        eh_primeiro=0;
        if(xc == 1) printf("%d centena", xc);
        else printf("%d centenas", xc);
    }
    if(xd != 0){
        if(!eh_primeiro){
            printf(" + ");
        }
        eh_primeiro=0;
        if(xd == 1) printf("%d dezena", xd);
        else printf("%d dezenas", xd);
    }
    if(xu != 0){
        if(!eh_primeiro){
            printf(" + ");
        }
        if(xu == 1) printf("%d unidade", xu);
        else printf("%d unidades", xu);
    }
    printf(" = ");
    eh_primeiro=1;
    if(xm != 0){
        if(!eh_primeiro) printf(" + ");
        eh_primeiro=0;
        printf("%d", xm*1000);
    }
    if(xc != 0){
        if(!eh_primeiro) printf(" + ");
        eh_primeiro=0;
        printf("%d", xc*100);
    }
    if(xd != 0){
        if(!eh_primeiro) printf(" + ");
        eh_primeiro=0;
        printf("%d", xd*10);
    }
    if(xu != 0){
        if(!eh_primeiro) printf(" + ");
        eh_primeiro=0;
        printf("%d", xu);
    }
    printf("\n");
    return 0;
}