#include<stdio.h>

int main(){
    double a,b, resp;
    char op,c;
    scanf("%lf%c%lf%c%lf", &a,&op,&b,&c,&resp);
    if(op=='+'){
        if(a+b == resp) printf("CORRETO\n");
        else printf("ERRADO! O resultado deveria ser: %lf\n", a+b);
    } 
    if(op=='-'){
        if(a-b == resp) printf("CORRETO\n");
        else printf("ERRADO! O resultado deveria ser: %lf\n", a-b);
    } 
    if(op=='/'){
        if(a/b == resp) printf("CORRETO\n");
        else printf("ERRADO! O resultado deveria ser: %lf\n", a/b);
    }
    if(op=='*'){
        if(a*b == resp) printf("CORRETO\n");
        else printf("ERRADO! O resultado deveria ser: %lf\n", a*b);
    } 
    return 0;

}