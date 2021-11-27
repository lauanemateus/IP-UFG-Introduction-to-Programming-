#include<stdio.h>

int main(){
    int b,c,d;
    double a;
    scanf("%lf%d%d%d", &a,&b,&c,&d);
    if(c==1) printf("ALUNO NAO COTISTA\n");
    else {
        printf("ALUNO COTISTA ");
        if(a/b<=1.5*937){
            if(d!=4) printf("(L2)\n");
            else printf("(L1)\n");
        }
        else{
            if(d!=4) printf("(L4)\n");
            else printf("(L3)\n");
        }
    }
    return 0;
}